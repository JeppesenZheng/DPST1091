#include <stdio.h>
#include <ctype.h>
// using isdigit function in ctype.h
// https://www.geeksforgeeks.org/isdigit-function-in-c-cpp-with-examples/

int main(void) {
    int c;
    int digit_count, digit_sum, digit_value;

    digit_count = 0;
    digit_sum = 0;

    while(c != EOF) {
        if (isdigit(c)) {
            digit_count ++;
            digit_sum += (c - '0');
        }
        c = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", digit_count, digit_sum);
    return 0;
}
