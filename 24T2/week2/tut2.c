// int - integer 4 bytes
// double - floating point numbers 8 
// char - characters 1


// 1. Bit VS Byte
// 8 bits = 1 Byte
// file and directory

// 2. What is a variable? 
// What does it mean to declare a variable? 
// What does it mean to initialise a variable? 
// Which of these steps are required?
/*
	int number = 0;

*/

// 3. What does C is a typed language mean? Why is this useful?

// 4. What is the difference between declaring variable and using a #define
/*
	you can't change the value after you define it
	when you give a name for defined variable, it should be all uppercases

*/

// 5. Which of the following are valid variable names in C?
/*
General rules:
	
	1. No whitespaces and special characters like !@#$%%
	2. start with a letter or a underscore
	3. letter underscore and digits
	4. reserved name is not invalid int, char, double printf

Better:	
	
	1. a descriptive name, p, n -> pointer or number counter
	2. using define all letters should be in uppercase.

Examples:

	THX1138 -- valid

	2for1 -- invalid, start with a letter or a underscore
	
	mr_bean -- valid

	my space -- invalid no whitespaces

	event_counter -- valid 

	^oo^ -- invalid special characters

	_MEMLIMIT -- valid

	return -- invalid reserved name

*/

// 6. Calculations
/*
	3 + 5 * 10 - 12

	3 + 15 % 10 - 12 / 2

	1 / 2 * 500

	1 / 2.0 * 500

	(17 / 5) * 5 + (17 % 5)

	(12 - 17) % 6 - 4

	10 / (1 / 2)

*/
#include <stdio.h>

#define NUM 10

int main(void) {
	// print the size of double and int

	printf("%d\n", 3 + 5 * 10 - 12);
	printf("%d\n", 3 + 15 % 10 - 12 / 2);

	// printf("%d\n", 1 / 2 * 500);
	// printf("%lf\n", 1 / 2.0 * 500);
	// printf("%d\n", (17 / 5));
	printf("%d\n", (12 - 17) % 6 - 4);
	// printf("%d\n", 10 / (1 / 2));
	return 0;
}