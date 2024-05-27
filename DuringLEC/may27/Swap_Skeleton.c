#include <stdio.h>

// Write your definition of Swap function here
void swap(int *xPtr, int *yPtr)
{
    int temp;
    printf("In Swap - Before Swapping\n");
    printf("*xPtr = %d; *yPtr = %d\n", *xPtr, *yPtr);

    temp = *yPtr;
    *yPtr = *xPtr;
    *xPtr = temp;

    printf("In Swap - After Swapping\n");
    printf("*xPtr = %d; *yPtr = %d\n", *xPtr, *yPtr);
}

int main(void)
{
    int a = 100;
    int b = 200;

    printf("In Main - Before Swapping\n");
    printf("a = %d; b = %d\n", a, b);
    // Function call to swap
    swap(&a, &b);

    printf("In Main - After Swapping\n");
    printf("a = %d; b = %d\n", a, b);
    return 0;
}
