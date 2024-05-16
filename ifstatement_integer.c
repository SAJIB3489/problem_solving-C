// C Program that asks user an integer number i . 
// The program prints - "Greater than zero", if i>0 , - "Less than zero", if i , and - "Zero", if i=0 .


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<math.h>

int main(int  argc, char** argv) {

	int i;
	printf("Enter a number:\n");
	scanf("%d", &i);
	if (i > 0) {
		printf("Greater than zero\n");
	}
	else if (i < 0) {
		printf("Less than zero\n");

	}
	else if (i == 0) {
		printf("Zero\n");
	}
}