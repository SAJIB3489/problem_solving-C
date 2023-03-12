#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char** argv) {
    double length, width, area;

    printf(" Please Enter the Width of a Rectangle  :  ");
    scanf("%lf", &width);

    printf(" Please Enter the Length of a Rectangle :  ");
    scanf("%lf", &length);

    area = length * width;

    printf(" The area of a Rectangle : %.2lf\n", area);
 
}