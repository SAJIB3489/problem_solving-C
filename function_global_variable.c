/*


Write a module largest that contains two functions void setLargest(unsigned int u) , 
and void printLargest() , and, in addition, and a global variable unsigned largest .

The first function sets variable largest=max(u, largest), and the second one prints value of variable largest.

*/


#define _CRT_NO_WARNINGS
#include<stdio.h>
#include <stdbool.h>

unsigned largest = 0;

void setLargest(unsigned int u)
{
    if (largest < u)
    {
        largest = u;
    }
}

void printLargest()
{
    printf("%d \n", largest);
}