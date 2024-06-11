#include <stdio.h>

// how to fix it?

int main(void) {
    char str[3];
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';
    printf("%s", str);
    return 0;
}
