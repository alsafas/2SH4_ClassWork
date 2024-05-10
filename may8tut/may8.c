#include <stdio.h>

int main(void)
{
    //Declarations
    int flag = 0, numBuf[5], i;
    
    printf("Please input 5 integers, one per line:");

    //Get 20 integers from user
    for (i = 0; i<5; i++)
    {
        scanf("%d", &numBuf[i]);
    }

    
    //for (i = 0; i<4; i++)
    i = 0;
    while (i < 4)
    {
        printf("Index i: %d \n", i);
        if (numBuf[i] >= numBuf[i+1])
        {
            flag = 0;
            break;
        }
        i++;
    }

    //Output the result
    if (flag == 1)
    {
        printf("The numbers are in ascending order.\n");
    }
    else
    {
        printf("The numbers are not in ascending order.\n");
    }

    return 0;    
}