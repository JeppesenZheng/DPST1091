/*
getchar:
    return: EOF or int
instruction for getchar
https://www.geeksforgeeks.org/getchar-function-in-c/

'\n' in fgets: all only exits when press enter
instruction for fgets
https://www.geeksforgeeks.org/fgets-gets-c-language/
*/

#include <stdio.h>

int main(void) {
    // a basic example using getchar and putchar
    char c;
 
    printf("Enter character: ");
    c = getchar();
 
    printf("Character entered: ");
    putchar(c);

    // use getchar instead of scanf in while
    // char c;
    c = getchar();
    while(c != EOF) {
        printf("%c\n", c);
        c = getchar();
    }
    // while(scanf(" %c", &c) != EOF) {

    // }

    // basic example using fgets
    char str[6];
    // fgets(str, 6, stdin);
    scanf("%s", str);
    printf("%s", str);
}

/*
int array: [[1], [2], [3]]
string: [['c'], ['d'],  ['\0']]

*/