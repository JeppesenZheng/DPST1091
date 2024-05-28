#include <stdio.h>

int main(void) {
	printf("Do you like puns, (yes press 1, no press 0)\n");
	int result;
	scanf("%d", &result);
	if (result == 1) {
		printf("Do you like computers more than books (yes press 1, no press 0)\n");
		int result1;
		scanf("%d", &result1);
		if (result1 == 1) {
			printf("You will be glad to C this pun, then.\n");
		} else if (result1 == 0) {
			printf("I hope the police book you for saying that.\n");
		} else {
			// if the input is not 1 or 0
			printf("Choose 1 or 0\n");
		}
	} else if (result == 0) {
		printf("That's pUnfortunate.\n");
	} else {
		// if the input is not 1 or 0
		printf("Choose 1 or 0\n");
	}

}
