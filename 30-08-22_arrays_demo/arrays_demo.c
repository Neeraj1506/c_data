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
* FILENAME...... arrays_demo.c
* DATE CREATED.. 30-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 30-08-22		Description:    DEMONSTRATE ARRAYS
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. void copy_array(int cpy_arr[], int size);
*						3.
*						4. 
*
*\******************************************************************************/
#include <stdio.h>

void copy_array(int cpy_arr[], int size);
void two_d_array(void);
int copy_of_array[] = {0};

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	30-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{    
    int size = 0;
    int choice = 0;
    int loop = 0;
    int one_d_array[] = {0};
    
    while(1){
    
        printf("\n Enter Your Choice 1. 1-D Array and Copy Data 2. 2_D Array  0. Exit() \n");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                printf("\n\t Enter Size For 1-D Array: ");
                scanf("%d", &size);
                
                one_d_array[size];
                
                for(loop = 0; loop < size; loop++){
                    printf("\t Enter Value For Array[%d]: ", loop);
                    scanf("%d", &one_d_array[loop]);
                }     
                  
                printf("\t\n\t Your Entered Array  Value is : ");
                for(loop = 0; loop < size; loop++){
                    printf("\n\t %d", one_d_array[loop]);
                    printf(" with Address %p", &one_d_array[loop]);
                } 
                
                copy_array(one_d_array, size);
                
                break;
            
            case 2:                     
                two_d_array();
                break;
              
            case 0:
                return 0;
                
            default:
                printf("\n Invalid Option. \n");
                
            }
    }
    return 0;
}

/*******************************************************************************
 Function Name - void copy_array(int cpy_arr[], int size);						
 
 @Argument1 - Integer
 @Argument2 - Integer
 
 Return Val -   void
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	30/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
void copy_array(int cpy_arr[], int size){
    int loop = 0;
    printf("\n\n Old Array is Now Copied to Another Array..\n");
    for(loop = 0; loop < size; loop++){
        copy_of_array[loop] = cpy_arr[loop];
        printf("\n\t %d", cpy_arr[loop]);
        printf(" With New Address %p", &copy_of_array[loop]);
    }
}

/*******************************************************************************
 Function Name - void two_d_array(void);					
 
 @Argument1 - Void
 @Argument2 - 
 
 Return Val -   void
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	30/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
void two_d_array(void){
        int row,col;
        int loop1, loop2;
        printf("\n Enter Row & Column Size For 2_D Array: ");
        scanf("%d %d", &row, &col);  
        int matrix[row][col];
        
        for(loop1 = 0; loop1 < row; loop1++){
            for(loop2 = 0; loop2 < col; loop2++){
                printf("\n Enter Value For Matrix[%d][%d]: ", loop1, loop2);
                scanf("%d", &matrix[loop1][loop2]);
            }
        }  

        printf(" \n Your Matrix is : \n\t");
        for(loop1 = 0; loop1 < row; loop1++){
            for(loop2 = 0; loop2 < col; loop2++){
                printf("%d ", matrix[loop1][loop2]);
                printf("\t");
            }
            printf("\n\t");
        }
        return;
}
