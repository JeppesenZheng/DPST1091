#include <stdio.h>

int main(void) {
    int x = 0;

    printf("Start of loop\n");

    while (x < 10) {
        printf("current x is %d\n", x);

        x ++;
        // x += 1;
    }

    // for (int x = 0; x < 10; x ++) {
    //     printf("current x is %d\n", x);
    // }

    printf("after while loop %d\n", x);

    printf("End of loop\n");


    printf("start loop\n");

    while (outer condition) {
        while(inner condition) {
            looop body
        }
    }

    return 0;
}