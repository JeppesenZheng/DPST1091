// What is a function?

// What is a function prototype, and when should we use them?

// Why do we use functions?


// write the function named sum and message 
// sum will add the two integer parameters and message just write the message
#include <stdio.h>

// function prototypes
// function structure:
// return type | functionName (type name, type name)
int sum(int a, int b);
void message(void);


int main(void) {
	message();
    int a, b;
    scanf("%d %d", &a, &b);
    printf("result %d\n", sum(a, b));
}

int sum(int a, int b) {
    return a + b;
}

void message(void) {
    printf("Enter two integers: ");
}