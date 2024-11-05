#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct my_struct {
    int number;
    char letter;
    double another_number;
    char *str[SIZE];
};

int main(void) {
    int integer = 1;
    double floating_number = 6.20;
    char ch = 'a';
    printf("the size of integer is %d\n", (int)sizeof(integer));
    printf("the size of floating_number is %d\n", (int)sizeof(floating_number));
    printf("the size of ch is %d\n", (int)sizeof(ch));

    // char *str = malloc(sizeof(char*20));

    struct my_struct *new_struct = malloc(sizeof(struct my_struct));

    printf("the size of struct is %d\n", (int)sizeof(struct my_struct));
}
