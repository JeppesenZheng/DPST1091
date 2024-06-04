/*
1. what is an array

2. how to create an array
type name[SIZE]
index is start from 0 to SIZE - 1

3. how to initialise an array
int arr[0] = {0}
int arr[5] = {1,2,3,4,5}
int arr[3] = {0,0,0,0}

4. how to traverse an array
for (int i = 0; i < SIZE; i ++) {
    printf("%d\n", arr[i])
}

5. string

char arr[6] = {'h', 'e', 'l', 'l', 'o', '\0'}
char arr[6] = "Hello"
6. 2D array
int array[row][col]
for(int row; row < SIZE; row ++) {
    for (int col; col < SIZE; col ++) {

    }
}
*/

#include <stdio.h>
#include <string.h>

#define SIZE 3

// one way to pass into a function is using pointer
void scan(int *arr) {
    for(int i = 0; i <  SIZE; i ++) {
        scanf("%d", &arr[i]);
    }
}

// another way
void print(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i ++) {
        printf("%d", arr[i]);
    }
}

int main() {
    // create an array
    int arr[SIZE];
    // scan in the value into the array
    scan(arr);
    // print the value in the array
    print(arr);
    char str[6] = {'H', 'e', 'l', 'l', 'o','\0'};
    char str1[6] = "Hello";
    char str2[6];
    scanf("%s", str2);
    printf("%s\n", str1);
    for (int i = 0; i < 6; i ++) {
        printf("%c\n", str1[i]);
    }

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 0;
    while(row < SIZE) {
        int col = 0;
        while(col < SIZE) {
            printf("%d", matrix[row][col]);
            col ++;
        }
        row ++;
        printf("\n");
    }
    // for (int row = 0; row < SIZE; row ++) {
    //     for (int col = 0; col < SIZE; col ++) {
    //         printf("%d", matrix[row][col]);
    //     } 
    //     printf("\n");
    // }
    // char str2[6];
    // scanf("%s", str2);
    // printf("%s\n", str2);
    if (strcmp(str1, str) == 0) {
        printf("Two strings are equal\n");
    }
    printf("%d\n", (int)strlen(str1));
    return 0;
}