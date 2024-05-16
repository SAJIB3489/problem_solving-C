// Create a software by C that prints all positive integer values 1...100 that are not divisible by 7



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(int  argc, char** argv) {

	for (int num = 1; num <= 100; num++) {
		if (num % 7 == 0) {
			continue;
		}
		printf("%d ", num);
	}

}