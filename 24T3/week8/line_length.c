#include <stdio.h>
#include <string.h>

#define MAX_LINE 4096

// only can use fgets and fputs
// step2: break it into functions
int main(void) {
    char line[MAX_LINE];

    while(fgets(line, MAX_LINE, stdin) != NULL) {

        int i = 0;
        while (line[i] != '\0' && line[i] != '\n') {
            i ++;
        }

        int length = strlen(line);
        printf("line length is %d\n", length - 1);
        printf("line %d characters long\n", i);
    }

    return 0;
}