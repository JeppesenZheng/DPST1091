#include <stdio.h>

int main(void) {
	// integer array
	int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	/*
		1 2 3
		4 5 6
		7 8 9
	*/

	// traverse the whole array
	// version1: while loop
	int i = 0;
	while (i < 3) {
		int j = 0;
		while (j < 3) {
			printf("current value is %d\n", array[i][j]);
		}
	}
	

	// version2: for loop
	for (int i = 0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			printf("current value is %d\n", array[i][j]);
		}
	}

	return 0;
}
