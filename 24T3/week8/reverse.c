#include <stdio.h>
#include <string.h>

#define MAX 4096

int main(void) {
    char line[MAX];
    while (fgets(line, MAX, stdin) != NULL) {
        int length = strlen(line) - 1;
        int i = length - 1;
        while (i >= 0) {
            printf("%c", line[i]);        
            i--;
        }
        printf("\n");
    }
    return 0;
}   