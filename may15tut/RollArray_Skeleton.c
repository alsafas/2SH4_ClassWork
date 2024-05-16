#include <stdio.h>
#include "MacUILib.h"

#define SIZE 10

int main(void)
{
    char dispStr[SIZE] = "123456789";  


    // For a character array of 10 characters, it can only hold at maximum a 9-character string
    // For now, IMAGINE in a character array containing a string, the last character in the array 
    // turns into a landmine.  You touch it, it blows up on you :D
    // That last character is called Null character '\0'
    // We will discuss on why N-1 later.

    // Task: How do we roll the contents of the string across the screen?
    int i;
    int startPos=0;
    MacUILib_init();


    // First, let's try right-to-left rolling (easy)
    while(1){
    
    MacUILib_clearScreen();
    for(i=0; i<SIZE-1; i++){
        MacUILib_printf("%c", dispStr[(startPos + i) % (SIZE-1)]);
    }
    startPos++;
    if (startPos >= SIZE-1){
        startPos = 0;
    }
    MacUILib_Delay(999999);

    }
    // Then, we will think about how to roll left-to-right (a bit challenging)


    MacUILib_uninit();

    return 0;
}