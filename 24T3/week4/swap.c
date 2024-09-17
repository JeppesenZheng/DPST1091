#include <stdio.h>

// function prototype
void swap(int a, int b);

int main(void) {
    int num1 = 5;
    int num2 = 6;
    swap(num1, num2);
    printf("new num1 is %d num2 is %d\n", num1, num2);
    return 0;
}

void swap(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("a is %d, b is %d\n", a, b);
}