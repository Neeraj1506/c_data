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
* FILENAME...... advan_pointers.c
* DATE CREATED.. 02-09-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 02-09-22		Description:    Exercise for advanced pointer
*   MODIFIED:   	Rev	Author	Date 		        Description :   Array of Function Pointers
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int addition(int num1, int num2);
*						3. int subtraction(int num1, int num2);
*						4  int multiply(int num1, int num2);
*						5. int divide(int num1, int num2);
*\******************************************************************************/
#include <stdio.h>

int addition(int num1, int num2);
int subtraction(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int arg, char *argv[])
{
    int choice = 0;
    int num1 = 0;
    int num2 = 0;
    int (*func_array[4])(int, int) = {addition, subtraction, multiply, divide};
    
    while(1){
    
        printf("\nEnter  Your Choice: \n 1.Addition \n 2.Subtraction \n 3.Multiply \n 4.Divide\n 0.Exit\n");
        scanf("%d", &choice);
        
        switch (choice){
            
            case 1:
                printf("\nEnter Two Numbers For Addition: \n");
                scanf("%d %d", &num1, &num2);
                
                printf("Result is: %d", (*func_array[0])(num1, num2)); 
                break;
              
            case 2:
                printf("\nEnter Two Numbers For Subtrtaction: \n");
                scanf("%d %d", &num1, &num2);
                
                printf("Result is: %d", (*func_array[1])(num1, num2));
                break;
                
            case 3:
                printf("\nEnter Two Numbers For Multiplication: \n");
                scanf("%d %d", &num1, &num2);
                
                printf("Result is: %d", (*func_array[2])(num1, num2));
                break;
                
            case 4:
                printf("\nEnter Two Numbers For Divide: \n");
                scanf("%d %d", &num1, &num2);
                
                printf("Result is: %d", (*func_array[3])(num1, num2));
                break;
            
            case 0:
                return 0;
                
            default:
                printf("\nInvalid Option\n");
                
        }
    }
    return 0;
}

/*******************************************************************************
 Function Name - 	int addition(int num1, int num2);						
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int addition(int num1, int num2){
    return num1 + num2;
}

/*******************************************************************************
 Function Name - 	int subtraction(int num1, int num2);						
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int subtraction(int num1, int num2){
    return num1 - num2;
}

/*******************************************************************************
 Function Name - 	int multiplication(int num1, int num2);						
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int multiply(int num1, int num2){
    return num1 * num2;
}

/*******************************************************************************
 Function Name - 	int divide(int num1, int num2);						
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int divide(int num1, int num2){
    return num1 / num2;
}            
                
                
                
                
                
    
    
