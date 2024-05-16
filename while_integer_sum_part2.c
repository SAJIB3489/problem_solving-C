/*
Modify the solution of the While_integer_sum.c file , so that it prints the sum before asking a new number. Use while, not do-while, loop.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int askNumber(void) {
	int n = 0;
	printf("Enter an integer:");
	scanf("%d", &n);
	return n;
}

int main(int  argc, char** argv) {
	int result = 0;
	int user_int = 0;
	while (user_int >= 0) {
		result += user_int;
		printf("Current sum of positive integers: %d\n", result);
		user_int = askNumber();
	}
	printf("Total sum of positive integers: %d\n", result);
}