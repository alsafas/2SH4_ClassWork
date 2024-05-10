#include <stdio.h>
#include "MacUILib.h"

int main(void)
{
    char c = 'A';
    
    MacUILib_init();

    while(1)
    {
        MacUILib_clearScreen();
        MacUILib_printf("%c", c);

        c++;

        if(c > 'Z')
            c = 'A';

        MacUILib_Delay(500000);

    }

    MacUILib_uninit();

    return 0;
}