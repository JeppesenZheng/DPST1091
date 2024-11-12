// variables
// if
// looping
// functions
#include <stdio.h>

struct person {
    int age;
    char gender;
};

int add(int a, int b);

int main(void) {
    int num1 = 0;
    double floating = 0;
    char ch = 'a';
    char string[4096];

    fgets(string, 4096, stdin);
    fputs(string, stdout);

    scanf("%d", &num1);
    scanf("%lf", &floating);
    scanf(" %c", &ch);
    scanf("%s", string);
    

    printf("%d\n", num1);
    printf("%lf\n", floating);
    printf("%c\n", ch);
    printf("%s\n", string);

    

    // condition
    True 1, False 0
    if (!(num1 == 0)) {

    } else {

    }

    // init
    int i = 0;
    while (i < 10) {
        i ++;
    }

    for (int i = 0; i < 10; i++) {

    }

    // if we wanna quit the loop with ctrl+D
    while (scanf(" %c", &command) == 1) {

    }

    struct person person1;
    person1.age = 1;
    person1.gender = 'M';

    // create integer array
    int arr[10];
    
    struct person people[10];
    for (int i = 0; i < 10; i ++) {
        poeple[i].age = 1;
        people[i].gender = 'F';
    }

    int sum = add(1, 'a');
    // 'b'
    printf("%c\n", sum);

    return 0;
}

int add(int a, char b) {
    // a = 1
    // b = 'a' = 97
    // a + b = 98
    return a + b;
}