#include <stdio.h>

int main(void) {
	int n = 42;
	int *p, *q;
	p = &n;
	printf("the address of n is %p\n", &n);
	printf("the address of p is %p\n", &p);
	printf("the value of p is %d\n", *p);
	*p = 5;
	printf("the value of n is %d\n", n);
	printf("the address of q is %p\n", &q);
	q = &n;
	*q = 17;
	q = p;
	printf("the value of q is %d\n", *q);
	*q = 8;
	printf("the value of q is %d\n", *q);
}
