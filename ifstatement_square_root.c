// Program that prints square root of a given number. If number is negative, message "ERROR" is printed. by C Program

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<math.h>

int main(int  argc, char** argv) {

	double number;
	printf("Enter a number:\n");
	scanf("%lf", &number);
	if (number > 0) {

		printf("Square root of %lf is %lf\n", number, sqrt(number));

	}
	else {
		printf("Error!!\n\n");
	}
}