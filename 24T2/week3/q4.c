#include <stdio.h>

int main(void)
{
	int inputNum, i; 

	// inputNum = 3

	printf("Enter a number: "); 
	scanf("%d", &inputNum); 

	i = inputNum; 

	// if (i <= 5) {
	//     printf("%d\n", i * i); 
	//     i = i + 1; 
	// }
	while (i <= 5) {
	    printf("%d\n", i * i); 
	    i = i + 1; 
	}
	return 0;
}