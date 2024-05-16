// Mathematical functions by C Program that computes square root and square 
// of a given non negative real number. Print results at separate rows. By C Program



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(int argv, char** argc) {
    int number;
    float rt;
    printf("Enter a number:\n");
    scanf("%d", &number);

    rt = sqrt(number);
    printf("squre root of %d = %f\n", number, rt);

    int a, square;
    printf("Enter a number:\n");
    scanf("%d", &a);
    square = a * a;
    printf("Square is = %d\n", square);
}