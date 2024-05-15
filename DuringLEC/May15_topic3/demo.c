#include <stdio.h>

int main (void)
{
    int a=1, b=7;
    float ans = 0.142857;

    if((float)a/(float)b == 0.142857)
    {
        printf("Correct");
    }
    else
    {
        printf("Not correct");
    }
    return 0
}