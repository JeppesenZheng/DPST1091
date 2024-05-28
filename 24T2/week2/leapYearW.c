#include <stdio.h>

int main(void){
	printf("Enter the year:");
	int year;
	scanf("%d", &year);
	if ((year % 4) == 0) {
		printf("Year %d is a leap year\n", year);
	} else if ((year % 100) == 0) {
		printf("Year %d is not a leap year\n", year);
	} else if ((year % 400) == 0) {
		printf("Year %d is a leap year\n", year);
	}

	return 0;
}