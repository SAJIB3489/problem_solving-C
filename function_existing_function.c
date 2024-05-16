// write a program by C that prints all prime numbers below 100 space separated in one line.


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int p);

void printPrimes(int lim) {
	for (int i = 2; i <= lim; i++) {
		if (isPrime(i)) {
			printf("%d\t", i);
		}
	}
	printf("\n");
}
bool isPrime(int p) {
	for (int u = 2; u < p; u++) {
		if (p % u == 0) {
			return false;
		}
	}
	return true;
}
int main(int argc, char** argv) {
	printPrimes(100);
}