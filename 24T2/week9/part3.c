// allocating memory for a string of size 20 and then store "Hello" in that.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    chat *str = malloc(20 * sizeof (char));
    strcpy(str, "Hello");
}