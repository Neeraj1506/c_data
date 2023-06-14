/******************************************************************************\
*           Copyright (C) 1999 Spectross Digital System (P) Ltd.
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
* MODULE NAME... TRAINING
* FILENAME...... iteration.c
* DATE CREATED.. 27-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 27-08-22		Description:    Show how while and do-while works
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int fun_whi(int num, int counts);
*						3. int fun_dwhi(int num, int counts);
*						4. 
*
*
\******************************************************************************/
#include <stdio.h>

int fun_whi(int num, int counts);
int fun_dwhi(int num, int counts);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	27-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char *argv[])
{
    int input = 0;
    int count = 0;
        
    printf("enter any value to demonstrate  \n");
    scanf("%d", &input);
        
    printf("enter how many times you want to print: ");
    scanf("%d", &count);
       
    fun_whi(input, count);
    fun_dwhi(input, count);
        
    return 0;
}

/*******************************************************************************
 Function Name - 	 int fun_whi(int num, int counts)						
 
 @Argument1 - integer
 @Argument2 - integer
 
 Return Val - integer
 
 Programmer - Neeraj Rawat 
 
 Date	-	27-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
 int fun_whi(int num, int counts){
    int times = 1;
    while(times <= counts){
        printf("%d prints %d times in while loop \n", num, times);
        times++;
    }
}

/*******************************************************************************
 Function Name - int fun_dwhi(int num, int counts)							
 
 @Argument1 - integer
 @Argument2 - integer
 
 Return Val - integer
 
 Programmer - Neeraj Rawat 
 
 Date	-	27-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
 int fun_dwhi(int num, int counts){
    int times = 1;
    do{
        times++;
        printf("%d prints %d times in do-while loop \n", num, times);
    }while(c <= counts);
}
