// C Program that asks user a positive integer number u . 
// The program prints all integer numbers 1…u that are divisible by 3 or 4 space separated in one line. HINT: a%b=0 if a is divisible by b.


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main(int  argc, char** argv) {

    unsigned int u, i;
    printf("Enter a positive integer number: ");
    scanf("%d", &u);
    printf("Following are the numbers from 0 to %d that are divisble by 3 or 4.\n", u);
    for (i = 1; i <= u; i++)
    {
     if (i % 3 == 0 || i % 4 == 0)
     printf("%d ", i);
    }
}