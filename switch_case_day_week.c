/*

Create a function that prints a day of week. 
The function gets day number as a parameter. Let Monday=1 and Sunday=7. Use enum-type and switch-case.

*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

enum Day { Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7 };

void CallDay(int num) {
	switch (num) {
	case Monday:
		printf("it is monday");
		break;
	case Tuesday:
		printf("it is tuesday");
		break;
	case Wednesday:
		printf("it is wednesday");
		break;
	case Thursday:
		printf("it is thursday");
		break;
	case 5:
		printf("it is friday");
		break;
	case Saturday:
		printf("it is saturday");
		break;
	case Sunday:
		printf("it is Sunday");
		break;
	default:
		printf("please input a valid number from 1 to 7  ");
	}
}

int main(int agrc, char argv) {
	int a = 6;
	printf("input a number from 1 to 7, 1=Monday and 7= Sunday");
	scanf("%d", &a);

	CallDay(a);
}