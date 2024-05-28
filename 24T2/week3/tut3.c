// 1.Make the precedence explicit in the following expressions by adding parentheses:
/*
	3 + 5 * 10 - 12

	a > 5 || b < 3

	a = b > c && b || d

	!a || a && c
*/

// 2.Difference between || and &&
/*

	|| if (True || False) (True || True) || (false || true) => true (false  || false) => false

	&& if (true && true) => true otherwise=> false;

*/

// 3.Difference between while loops and if statement
/*


	
	syntax of while loop:

	init;
	
	while(condition) {
		
		increment or decrement
	}


*/

// syntax of for loop:
/*

	for (init; condition; increment or decrement)

*/


// 7.Difference between enum and define
/*

*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

enum opal_card_type {
    ADULT, // 0
    STUDENT, // 1
    CONCESSION // 2
    // 3
    // 4
    // 5
};


#define ADULT 0
#define STUDENT 1
#define CONCESSION 2

int main(void) {

	// example for || and &&
	if ((TRUE || FALSE) == TRUE) {
		printf("True\n");
	} else {
		printf("False\n");
	}

	if ((FALSE || FALSE) == TRUE) {
		printf("True\n");
	} else {
		printf("False\n");
	}

	if ((TRUE && FALSE) == TRUE) {
		printf("True\n");
	} else {
		printf("False\n");
	}

	if ((TRUE && TRUE) == TRUE) {
		printf("True\n");
	} else {
		printf("False\n");
	}

	// print the value of ADULT / STUDENT / CONCESSION in enum
	enum opal_card_type type;
	type = ADULT;
	printf("%d\n", type); 
}