// prints the integers 1..42, one per line.

#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 42) {
		printf("%d\n", i);

		// i = i + 1;
		i ++;
	}


	for (int j = 1; j <= 42; j ++) {
		printf("%d\n", j);
	}
}