#include <stdio.h>

#define MAX 3

int main(void) {

    printf("start of loop\n");

    int row = 0;
    while (row < MAX) {
        int col = 0;
        while (col < MAX) {
            printf("currect (%d, %d)\n", row, col);
            col ++;
        }
        row ++;
    }
}