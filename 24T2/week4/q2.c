// Create a function called is_even which takes in an integer and returns 1 if it is an even number, and 0 if it is not.

#include <stdio.h>

#define TRUE 1
#define FALSE 0


int is_even(int num);

int main(void) {
	int number;
	scanf("%d", &number);

	if (is_even(number) == 1) {
		printf("Is even\n");
	} else {
		printf("Is odd\n");
	}
}

int is_even(int num) {
	if ((num % 2) == 0) {
		return TRUE;
	} 

	return FALSE;
}