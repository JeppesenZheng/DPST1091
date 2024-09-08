#include <stdio.h>

#define ROW 3
#define COL 3

int main(void) {

    // define a 2D array
    int array[3][3] = {{1, 2, 3},
             {4, 5, 6},
             {7, 8, 9}};

    // traverse process
    // version 1 - while loop
    int i = 0;
    while (i < ROW) {
        int j = 0;
        while (j < COL) {
            printf("Current position is (%d, %d)\n", i, j);
            j ++;
        }
        i ++;
    }

    return 0;
}