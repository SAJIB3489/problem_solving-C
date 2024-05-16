// C program that prints all positive integers up to first number 
// that is divisible by 7 and 5. The number that is divisible by both, 5 and 7, is included in output. Use break to terminate the loop.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(int  argc, char** argv) {
	int num = 1;
	while (true)
	{
		printf("%d ", num);
		if (num % 7 == 0 && num % 5 == 0)
		{
			break;
		}

		num++;
	}
}