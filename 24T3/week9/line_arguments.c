#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    for (int i = 0; i < argc ; i ++) {
        // printf("%s\n", argv[i]);
        int value = atoi(argv[i]);
        printf("%d\n", value);
    }

    return 0;
}