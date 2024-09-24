#include <stdio.h>

void print_int_array(int array[]) {
	for (int i = 0; i < 3; i ++) {
		printf("current value is %d\n", array[i]);
	}
}

int main(void) {
	// integer array
	int array[3] = {1, 2, 3};
	printf("the size of array is %d\n", (int)sizeof(array));
	// init an array with no elements, just size
	int array1[3];
	printf("the size of array1 is %d\n", (int)sizeof(array1));

	int array2[] = {1, 2, 3};

	double list[3] = {1.0, 2.0, 3.0};
	printf("the size of list is %d\n", (int)sizeof(list));

	char collections[3] = {'a', 'b', 'c'};
	printf("the size of collections is %d\n", (int)sizeof(collections));
	
	// traverse the whole array
	// version1: while loop
	int j = 0;
	while (j < 3) {
		printf("current value is %d\n", array[j]);
		j ++;
	}

	// version2: for loop
	for (int i = 0; i < 3; i ++) {
		printf("current value is %d\n", array[i]);
	}

	// init all values into 0
	int arr[5] = {0};

	// the index from 2 to 4 will all be initliased into 0 by default
	int arr[5] = {1, 2};


	return 0;
}
