#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 4096

int main(void) {
    char line[MAX];
    int has_non_space_character = 0;
    while (fgets(line, MAX, stdin) != NULL) {
        for (int i = 0; line[i] != '\0'; i ++) {
            if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n') {
                has_non_space_character = 1;
            }
        }
        if (has_non_space_character == 1) {
            printf("%s\n", line);
        }
    }

    return 0;
}