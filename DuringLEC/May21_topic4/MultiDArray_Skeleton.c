#include <stdio.h>

void printMatrix(const int input[][3], int size);

void transpose(int input[][3], int size)
{
    int i, j;
    

}

int main(void)
{ 
    // 1. Learn how to initialize the array
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; //2D Array

    // 2. Implement the printMatrix() function for visualization
    printMatrix(matrix, 3);

    // 3. If time allows... Implement transpose() function.

    return 0;
}

void printMatrix(const int input[][3], int size)
{
    int i, j;

    for(i=0; i<size; i++){ // loop for rows
        for(j=0; j<3; j++){ // loop for columns
            printf("%d   ", input[i][j]);
        }
        printf("\n");
    }

}