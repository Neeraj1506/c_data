/******************************************************************************\
*           Copyright (C) 2020 Spectross Digital System (P) Ltd.
*                           All Rights Reserved
*------------------------------------------------------------------------------
* SPECTROSS DIGITAL SYSTEMS PVT. LTD,
* 4,SIRI FORT ROAD,
* NEW DELHI-110049,
* INDIA.
*
* www.spectross.com
* support@spectross.com
* Ph - 91-11-26264077.
*------------------------------------------------------------------------------
* MODULE NAME... Training
* FILENAME......  fun_demo2.c
* DATE CREATED..  29/08/2022
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED:        NERAJ RAWAT	Date: 29/08/2022 		Description: Demonstrate fUNCTION TYPES
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int factorial(int num);
*						2. void swap(int* val1, int* val2);
*                       3. 
*
\******************************************************************************/
#include <stdio.h>

/*******************************************************************************
 Function Name - 	int factorial(int num)							
 
 @Argument1 - Integer
 @Argument2 - 
 
 Return Val -  Interger
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	29/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int factorial(int num){
    if (num == 0){
        return 1;
        }
    else 
        return (num * factorial(num - 1));
}

/*******************************************************************************
 Function Name - 	void swap(int* val1, int* val2)							
 
 @Argument1 - Pointer
 @Argument2 - 
 
 Return Val - void
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	29/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
void swap(int* val1, int* val2){

    printf("\tValue Of Num1 & Num2 Before Swapping is : %d %d \n\n", *val1, *val2);
    printf("\tAdress Now At Val1 & Val2 is: %p %p \n", (void*)val1, (void*)val2);
    
    int* temp = NULL;
    temp = val1;
    val1 = val2;
    val2 = temp;
    
    printf("\tValue Of Num1 & Num2 After Swapping is : %d %d \n", *val1, *val2);   
}
