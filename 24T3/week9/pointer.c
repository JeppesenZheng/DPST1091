#include <stdio.h>

int main(void) {
	int n = 42;
	int *p, *q;
	// now pointer p points to n, since p = the address of n
	p = &n;
	printf("the address of n is %p\n", &n);
	printf("the address of p is %p\n", &p);
	// since p points n, then they have the same address and value
	printf("the value of p is %d\n", *p);
	*p = 5;
	// reset the value of address that p points to (which is n) into 5
	printf("the value of n is %d\n", n);
	printf("the address of q is %p\n", &q);
	// now pointer q also points to n
	q = &n;
	*q = 17;
	q = p;

	// these three should have the same value
	printf("the value of q is %d\n", *q);
	printf("the value of n is %d\n", n);
	printf("the value of p is %d\n", *p);
	*q = 8;
	printf("the value of q is %d\n", *q);
	// can think like p is the address, *p is the value at this address
}
