/*
Write a module gt.c that contains a function bool greaterThan zero

    1. Write a module gt.c that contains a function bool greaterThanzero(int i) which returns 
    true if parameter i>0, otherwise the function returns false.

Create corresponding header file gt.h Write main.c containing a test program 
that checks working of the module. Output of the program is: 0 is not greater than 0 3 is greater 
than 0 -1 is not greater than 0 1 is greater than 0


*/


#include <stdio.h>
#include <stdbool.h>
#include "gt.h"

void printnumbers(int i)
{

    if (greaterThanzero(i) == true)
    {

        printf("%d Greater than 0\n", i);

    }

    else {
        printf("%d is not Greater than 0\n", i);
    }
}