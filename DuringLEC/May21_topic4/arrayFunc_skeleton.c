#include <stdio.h>
#define SIZE 10

void printVector(const int array[], int size);

void addVec(int array1[], int array2[], int resultArray[], int size);

int main(void)
{

    // 1. Test Initialization
    int vector1[SIZE] = {0};
    int vector2[SIZE] = {100, 200};
    int resultVec[SIZE];

    // 2. Print Vector
    printVector(vector1, SIZE);
    printVector(vector2, SIZE);
    printVector(resultVec, SIZE);

    // 3. Design a function that finds the sum of two vectors
    //    and return it to resultVec.
    addVec(vector1, vector2, resultVec, SIZE);

    // 4. Print Result Vector    
    printVector(resultVec, SIZE);

    return 0;
}

void printVector(const int array[], int size){
    int i;
    for (i=0; i<size; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
}

void addVec(int array1[], int array2[], int resultArray[], int size){
    int i;
    for(i=0; i<size; i++){
        resultArray[i] = array1[i] + array2[i];
    }
}