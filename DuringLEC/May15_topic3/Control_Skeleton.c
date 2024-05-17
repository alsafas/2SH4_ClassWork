#include <stdio.h>

int main(void)
{
    int i, j;
    char cmd;

    printf("Provide a command: ");
    scanf("%c", &cmd);

    // Ternary Operator Test
    printf("Ternary Operator:\n");
    cmd == 'x'? printf("True\n") : printf("False\n");

    // Condition Operator Test
    printf("Condition Operator (if-else):\n");
    if(cmd=='x')
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

	// Loop Examples
	// For Loop
	printf("For Loop:\n");

    for (i = 0, j=2; i < 5; i++, j+=3)
    {
        printf("i = %d; j = %d\n", i, j);
    }

	// While Loop
	printf("While Loop:\n");
    i=0, j=2;

    while(i<5)
    {
        printf("i = %d; j = %d\n", i, j);
        i++;
        j+=3;

    }
    
    return 0;
}