// C Program that asks user a positive integer number u . The program prints all integer numbers −5…u separated by space.


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


int main(int  argc, char** argv) {

	int u, i;
	printf("Enter a positive integer: ");
	scanf("%d", &u);
	printf("Following are the numbers from -5 to %d\n", u);
	for (i = -5; i <= u; i++)
		printf("%d ", i);
}