// C Program that asks user two integers and outputs the larger one.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>  
#include<math.h>

int main(int  argc, char** argv) {

	int one, two;
	printf("Enter two number:\n");
	scanf("%d %d", &one, &two);
	if (one > two) {
		printf("%d is largest\n", one);
	}
	else if (two > one) {
		printf("%d is largest\n", two);
	}
}