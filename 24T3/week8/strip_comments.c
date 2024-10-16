#include <stdio.h>

#define MAX 4096

int main(void) {
    char line[MAX];

    while (fgets(line, MAX, stdin) != NULL) {
        int i = 0;
        while (line[i] != '\0' && line[i] != '\n') {
            if (line[i] == '/' && line[i+1] == '/') {
                line[i] = '\0';
            }
            i++;
        }

        printf("%s\n", line);
    }

    return 0;
}  
