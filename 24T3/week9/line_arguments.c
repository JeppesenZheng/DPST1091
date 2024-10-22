#include <stdio.h>
#include <stdlib.h>
// https://www.tutorialspoint.com/c_standard_library/c_function_atoi.htm

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc ; i ++) {
        // printf("%s\n", argv[i]);
        int value = atoi(argv[i]);
        printf("%d\n", value);
    }

    return 0;
}