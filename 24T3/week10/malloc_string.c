#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 20

int main(void) {
    char *str = malloc(20*sizeof(char));
    strcpy(str, "hello");
    fputs(str, stdout);
}
