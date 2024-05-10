#include <stdio.h>

//Function Prototypes (function declerations);
int add(int x1, int x2);
int sub(int x1, int x2);
int mul(int x1, int x2);
int div(int x1, int x2);
int modulo(int x1, int x2);

// Main function
int main(void)
{
    int num1, num2;
    int result = 0;

    // First set of inputs
    // We need two input variables, get them from the user
    printf("\nPlease enter integer 1: ");
    scanf("%d", &num1);

    printf("Please enter integer 2: ");
    scanf("%d", &num2);

    printf("The integers you entered are: %d and %d\n", num1, num2);

    // Calling our basic math functions and printing results
    result = add(num1, num2);
    printf("%d + %d = %d\n", num1, num2, result);

    result = sub(num1, num2);
    printf("%d - %d = %d\n", num1, num2, result);

    result = mul(num1, num2);
    printf("%d x %d = %d\n", num1, num2, result);

    result = div(num1, num2);
    printf("%d / %d = %d\n", num1, num2, result);

    result = modulo(num1, num2);
    printf("%d mod %d = %d\n", num1, num2, result);
    
    return 0; 
}

//Function Definitions (function implementations)

//add function implementation
int add(int x1, int x2)
{
    return (x1 + x2);
}

//sub function implementation
int sub(int x1, int x2)
{
    return (x1 - x2);
}

//mul function implementation
int mul(int x1, int x2)
{
    return (x1 * x2);
}

//div function implementation
int div(int x1, int x2)
{
    return (x1 / x2);
}

//mod function implementation
int modulo(int x1, int x2)
{
    return (x1 % x2);
}