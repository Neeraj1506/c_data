// Ques : Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
//
//
//
//


#include<stdio.h>

typedef struct{
    int row;
    int col;
}Pair;

void print();
int matrix[3][3] = {{1,1,1},{1,0,1},{1,1,1}};

int main()
{
    Pair pairs[9];
    
    int pos = 0;
    
    // Taking the addresses of Zeroes. 

    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            if(matrix[r][c] == 0){
                pairs[pos].row = r;
                pairs[pos].col = c;
                pos++;
            }
        }
    }
    
    //Check pos and make zeroes.
    
    for(int i =0;i<pos;i++){
        
        printf("Postion at matrix : \n %d, %d\n",pairs[i].row, pairs[i].col);
        
        for(int r=0;r<3;r++){
            for(int c=0;c<3;c++){
                if(pairs[i].row == r || pairs[i].col == c){
                    matrix[r][c] = 0;
                }
            }
        }
    }
    
    print();        // Print matrix
    
    return 0;
}


void print(){
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                printf("%d ", matrix[r][c]);
            }
        printf("\n"); // New line after each row
    }
}
