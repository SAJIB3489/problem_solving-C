/*
Create a function void printNumber(int val). If the parameter is 0...9, 
the function prints corresponding number in English. For example, printNumber(9) 
prints string "nine". If parameter is less than 0 or greater than 9, the function 
prints "ERROR: parameter out ouf range!".

*/




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void printNumber(int val) {
	if (val <= 9 && val >= 0) {
		switch (val) {
		case 0:
			printf("The number you input is zero");
			break;
		case 1:
			printf("The number you input is one");
			break;
		case 2:
			printf("The number you input is two");
			break;
		case 3:
			printf("The number you input is three");
			break;
		case 4:
			printf("The number you input is four");
			break;
		case 5:
			printf("The number you input is five");
			break;
		case 6:
			printf("The number you input is six");
			break;
		case 7:
			printf("The number you input is seven");
			break;
		case 8:
			printf("The number you input is eight");
			break;
		case 9:
			printf("The number you input is nine");
			break;
		}
	}
	else {
		printf("ERROR: parameter out of range");
	}
}

int main(int argc, char** argv) {
	int num = 7;
	printf("please input a number from 0 to 9    ");
	scanf("%d", &num);

	printNumber(num);
}