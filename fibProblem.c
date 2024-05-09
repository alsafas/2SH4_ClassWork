#include <stdio.h>

int main(void)
{
    //Goal: write a program that would allow the user to get any index from the fibonacci sequence

    //Declarations
    int i, n;

    printf("Please input the index of the fibonacci sequence you want to get: ");
    scanf("%d", &n);

    int fib[n];

    //Get the fibonacci number at index n
    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            fib[i] = 1;
        }
        else
        {
            fib[i] = fib[i-1] + fib[i-2];
        }
    }

    //Output the result
    printf("The fibonacci number at index %d is %d\n", n, fib[n-1]);
}