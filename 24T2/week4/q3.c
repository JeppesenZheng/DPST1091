// The variable result will have the value 1 if one integer was read from the user. 
// We call input from the user "standard input".

// Discuss how we could create a loop that would continually read values in 
// from standard input until the user inputs anything other than a number (or the input ends).

// scanf will return 0, 1 or EOF => end of file (-1)

#include <stdio.h>

int main(void) {
    int variable;
    // int result = scanf("%d", &variable);
    // printf("result %d\n", result);
    while(scanf("%d", &variable) == 1) {
        printf("scan in %d\n", variable);
    }
}