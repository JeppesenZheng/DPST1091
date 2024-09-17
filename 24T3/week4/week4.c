#include <stdio.h>

void calculation(int num1);

int main() {
    int num1 = 5;
    int num2 = 10;
    int num3 = 20;

    // Repeated code
    // First operation
    // put the operation in to a function
    int result1 = num1 * 2 + 5;
    printf("the result is %d\n", result1);

    // Second operation
    int result2 = num2 * 2 + 5;
    printf("the result is %d\n", result2);

    // Third operation
    int result3 = num3 * 2 + 5;
    printf("the result is %d\n", result3);

    // change the above code into the following
    calculation(num1);
    calculation(num2);
    calculation(num3);

    return 0;
}

void calculation(int num1) {
    int result = num1 * 2 + 5;
    printf("the result is %d\n", result);
}
