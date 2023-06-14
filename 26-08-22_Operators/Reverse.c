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
* FILENAME...... REVERSE N BIT NUMBER
* DATE CREATED.. 26-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 26-08-22		Description: REVERSE A NUMBER
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. 
*						3.
*						4. 
*
*
\******************************************************************************/
#include <stdio.h>

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	26-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
 
int main(int argc, char *argv[])
{
    while(1){
    
        int choice=0;
        int num = 0;
        int arrIndex = 31;
        int revPos = 0;
        int orgPos = 0;
        int arrBin[32]={0};
        
        printf("Enter your Choice:\n\n");
        
        printf("1. Do you want to Reverse any Integer in binary form \n2. Exit \n\n");
        scanf("%d", &choice);
        
        switch (choice){
        
            case 1:
            printf("\nEnter any  interger number to reverse:\n\n");
            scanf("%d", &num);
            
            printf("\nOriginal Binay form of %d is :  ", num);
            
            while(num){
            
                arrBin[arrIndex] = num % 2;
                num = num / 2;
                arrIndex--;
            }
               
            for(orgPos = 0; orgPos <= 31; orgPos++)
                printf("%d ", arrBin[orgPos]);
                    
            printf("\n\n");
            
            printf("Reveresd Binary form is : \t");
            
            for(revPos = 31 ; revPos >=  0; revPos--)
                printf("%d ", arrBin[revPos]);
                                
            printf("\n\n");
            break;
        
        case 2:
            return;
        }
    }
    return 0;
}   
    
