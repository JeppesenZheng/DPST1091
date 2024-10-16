#include <stdio.h>

#define MAX_LINE 4096

/**
 * 1. What are the three problems
 * a. On the first execution of the inner while loop, it accesses line[MAX_LINE], which is an illegal array index.
 * b. It accesses uninitialized array elements - fgets only assigns to the array elements necessary to hold the characters of a line plus a '\0'.
 * c. There may not be a '\n' in the array. fgets won't put a '\n' in the array if the line is too long to fit in the array. If there is no '\n' in the array, the code will access a non-existent array element (line[-1]).
 * 2. How to fix this
*/

int main(void) {
    char line[MAX_LINE];
    int  i;

    while (fgets(line, MAX_LINE, stdin) != NULL) {
        i = MAX_LINE; // i = MAX_LINE - 1
        while (line[i] != '\n') { // while (line[i] != '\n' && i >= 0)
            i = i - 1;
        }
        printf("the line is %d characters long\n", i);
    }
    return 0;
}
