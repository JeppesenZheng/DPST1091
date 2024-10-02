#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

    char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str1[] = "Hello world!";
    char str2[256];

    scanf("%s", str2);

    printf("str2 is %s\n", str2);

    // how to print the string using %c
    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}
