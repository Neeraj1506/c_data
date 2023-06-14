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
* FILENAME...... per_com.c
* DATE CREATED.. 02-09-22
* PROJECT....... TRAINING
* VERSION....... 1.00
*------------------------------------------------------------------------------
* HISTORY:	
*   CREATED: 	NEERAJ RAWAT	Date 02-09-22		Description:   Possible Permutation & Combination of a Given String
*   MODIFIED:   	Rev	Author	Date 05-09-22       Description :   
*------------------------------------------------------------------------------
* MODULE DESCRPTION: 
*
*
*
*
* FUNCTIONS:Following functions are defined in this file - 
*						1. int main(int argc, char *argv[]);
*						2. int permutation(char arr[], int size);
*						3. int print(char arr[], int size);
*						4  int call_comb(char org[], int pair, int size);
*						5. int combination(char real[], char data[], int pair, int end, int start, int index);
*\******************************************************************************/
#include <stdio.h>
#include <string.h>

int permutation(char real[], int size);
int print(char arr[], int size);
int call_comb(char org[], int pair, int size);
int combination(char real[], char data[], int pair, int end, int start, int index);

/*******************************************************************************
 Function Name - main function								
 
 @Argument1 - int argc
 @Argument2 - char *argv[]
 
 Return Val - integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int main(int argc, char* argv[])
{
    
    int choice = 0;
    int size = 0;
    int pair = 0;
    
    char word[20] = {0};
    printf("\nEnter the string:\n");
    scanf("%s", word);
    size = strlen(word);
        
    while(1){

        printf("Choose \t1. Permutation \t2.Combination \t0.Exit\n");
        scanf("%d", &choice);
       
        
        switch (choice){
        
            case 1:
                permutation(word, size);
                break;
            
            case 2:
                printf("Enter Pair No. For Combination You Want: \n\n");
                scanf("%d", &pair);
                call_comb(word, pair, size);
                break;
                
            case 0:
                return 0;
                
            default:
                  printf("\n Invalid Option");
        }
        
        
    }
    
    return 0;
}

/*******************************************************************************
 Function Name - 	int permutation(char arr[], int size)						
 
 @Argument1 - Char
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int permutation(char real[], int size){

    int times = 0;
    int pos = 0;
    char temp;
    
    for(times = 1; times <= size ; times++){
        for(pos = 0; pos < size-1; pos++){
            temp = real[pos];
            real[pos] = real[pos + 1];
            real[pos + 1] = temp;
            print(real, size);
            printf("\n");
        }
    }
    return 0;
}

/*******************************************************************************
 Function Name - int call_comb(char real[], int pair, int size)						
 
 @Argument1 - Char 
 @Argument2 - Integer
 @Argument3 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int call_comb(char org[], int pair, int size){

    char temp[pair];
    combination(org, temp, pair, size, 0, 0);
    return 0;
}

/*******************************************************************************
 Function Name - int combination(char real[], char data[], int pair, int end, int start, int index)						
 
 @Argument1 - Char 
 @Argument2 - Char
 @Argument3 - Integer
 @Argument4 - Integer
 @Argument5 - Integer
 @Argument6 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int combination(char real[], char data[], int pair, int end, int start, int index){
    
    int count = 0;
    int times = 0;
    
    if(index == pair){
        for(times; times < pair; times++){
            printf(" %c", data[times]);
        }
        printf("\n");
        return;
    }
    
    for(count = start; count <= end && end - count + 1 > pair - index; count++){
        data[index] = real[count];
        combination(real, data, pair, end, count + 1, index + 1);
    }
        
    return 0;  
}  

/*******************************************************************************
 Function Name - int print(char arr[], int size)						
 
 @Argument1 - Char
 @Argument2 - Integer
 
 Return Val - Integer
 
 Programmer - NEERAJ RAWAT	 
 
 Date	-	02-09-22
 Changes - changes Description (Not applicable to initial release)
 
 ******************************************************************************/
int print(char arr[], int size){

    int count = 0;
    
    for(count; count < size; count++){
        printf("%c", arr[count]);
    }
    return 0;
}  
