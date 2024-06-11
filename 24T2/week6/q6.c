#include <stdio.h>

// what does this function do?
// count how many lowercase alphabet in side the word string

int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}

int main(void) {
    char str[60];
    fgets(str, 60, stdin);
    int result = secret_function(str);
    printf("The result is: %d\n", result);
}