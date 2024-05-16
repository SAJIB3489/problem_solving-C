// C Program that ask user a positive integer N . The program has output of N lines;
// 1st line contains number 1, 2nd line contains numbers 1 and 2 separated by space etc. Use nested for loops to implement the output.


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(int  argc, char** argv) {

	unsigned int N, i, j;
	printf("Enter a positive integer: ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
	for (j = 1; j <= i; j++)
	printf("%d ", j);
	printf("\n");
	}
}