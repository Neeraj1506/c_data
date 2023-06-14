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
* FILENAME...... jump_state.c
* DATE CREATED.. 29-08-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 29-08-22		Description:    DEMONSTRATE JUMP STATEMENTS
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
*\******************************************************************************/
#include <stdio.h>

void  demo_break_conti(int val);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	29-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    int choice = 0;
    int times = 0;
    int con_value = 0;
    char option = '\0';
    
    while(1){
        printf("Enter your choice 1: goto 2: break-continue 3: exit from programm \n");
        scanf("%d", &choice);
        
        switch (choice){
            case 1:
                printf("Type Y for demo goto and N for not: \n");
                scanf(" %c", &option);
                
                if(option == 'Y'){
                     printf("go_label is called....\n\n");
                     goto ok_label;  
                    }
                    
                else if(option == 'N'){
                    printf("You didn't choose goto \n\n");
                    }
                break; 
                
            case 2:   
                printf("Choose the no. b/w 1-10 you want to continue: \n");
                scanf("%d", &con_value);
               
                demo_break_conti(con_value);
                break;
            
            case 3:
                return;
                
            default:
                printf("Invalid Choice:...\n");
          }
          
    }        
    ok_label:
        printf("I am in ok goto label and return from this funtion\n");
    
    return 0;
}

/*******************************************************************************
 Function Name - void fun_cont(val)							
 
 @Argument1 - integer
 @Argument2 - 
 
 Return Val - void
 
 Programmer - Neeraj Rawat 
 
 Date	-	29-08-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
void demo_break_conti(val){
    int times = 0;
    
    for(times; times < 10; times++ ){
        if(times == val){
            printf("this %d no. statemens skips \n", val);
            continue;
        }
        printf("It prints %d times .. \n", times);
    }
    return;
}
