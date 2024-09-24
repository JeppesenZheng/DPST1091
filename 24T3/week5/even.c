#include <stdio.h>

void print_array(int array[], int size) {
    for (int i = 0; i < size - 1; i ++) {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[size - 1]);
}

int main(void) {
    // init an integer array [1, 2, 3, 4, 5]
    int array[] = {1, 2, 3, 4, 5};
    int length = (int)sizeof(array)/4;
    int i = 0;
    while (i < length) {
        // check if it's even number
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i ++;
    }

    print_array(array, 5);
    return 0;
}
