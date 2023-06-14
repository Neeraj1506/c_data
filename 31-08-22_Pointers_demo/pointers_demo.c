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
* FILENAME...... pointers_demo.c
* DATE CREATED.. 31-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 31-08-22		Description:    DEMONSTRATE Pointers
*   MODIFIED:   	Rev	Author	Date		Description 
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int create_array(void);
*						3.
*						4. 
*
*\******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int create_array(void);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	31-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    while(1){
     
        int choice = 0;
        const int data = 5;
        int *ptr =  &data;
        int *unini_ptr;
        int *nul_ptr = NULL;
        
        printf("\nEnter Your Choice: 1. Creating An Array Dynamically. 2. Change Value of Constant Integer/Data 3. Wild Pointer/Null Pointer.\n\t\t   0. Exit()\n");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                create_array();
                break;
            
            case 2:
               /* printf("\nEnter Any Constant Integer:");
                scanf("%d", &data); */
                printf("\nWe gave Constant Data: 5; ");
                printf("\nUsing Pointers You Change The Constant Data: %d \n", ++*ptr);
                break;
            
            case 3:
                printf("\nUninitialised pointer (Also Known As Wild Pointer) Gives Garbage Value : %p", unini_ptr);
                printf("\nWhen We Assign NULL to A Pointer, It Returns : %p\n", nul_ptr);
                break;
                  
            case 0:
                return 0;
                
            default:
                printf("\nInvalid Choice.\n");
        }   
    }   
return 0; 
}

/*******************************************************************************
 Function Name - 	int create_array(void)					
 
 @Argument1 - void
 @Argument2 - 
 
 Return Val -  Integer
 
 Programmer -   NEERAJ RAWAT	 
 
 Date	-	31/08/2022
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int create_array(void){
    int size = 0;   
    int count = 0;
    int choice = 0;
        
    printf("\nEnter Size of Array:");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("\nInsufficient Memory.");
     }
     
     else {
        printf("\nEnter Elements of Array : ");
        for(count; count < size; count++){
            scanf("%d", arr + count);
        }
        printf("\nCreated Array Dynamically: ");  
        for(count = 0; count < size; count++){
            printf("%d ", *(arr + count));
        } 
        
        while(1){
            printf("\nNow What DO You Want TO Do This Array \n\n1. Show Address Using Pointers. \n2. Pointer Expressions. \n3. Free arr\n");
            scanf("%d", &choice);
            
            switch (choice){
                case 1:
                    for(count = 0; count < size; count++){
                        printf("\nAddress of Arr[%d] is: %p", count, arr + count);
                    }
                    break;
                    
                case 2:
                    printf("\n*ptr++ Gives : %d", *arr++);
                    printf("\n++*ptr Gives : %d", ++*arr);
                    printf("\n*(++ptr) Gives : %d", *(++arr));
                    printf("\n*(--ptr) Gives : %d", *(--arr));
                    break;
                    
                case 3:
                    printf("\nAfter Free() Variable arr Is Now A Dangling Pointer.\n");
                    return;
                    
                default:
                    printf("\nInvalid Otion.\n");
            }
        }              
    } 
    free(arr);   
    
    return 0;
}
