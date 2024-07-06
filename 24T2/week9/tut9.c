/*
How much memory is needed for different type
int: 4
double: 8
char: 1
char[10]: 10

How to get the value of memory is needed for different type
sizeof

what does malloc do?
takes: sizeof how many bytes you want to allocate

returns: a pointer points to the memory you have allocated

what does free do?
turn all the variables into uninitiated
and free the block of memory but the address will not change


difference bewteen static allocation and dynamic allocation
static allocation is using fullstop
dynamic allocation is using -> (arrow)
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct my_struct {
    int number;
    char letter;
    double another_number;
};

#define STRING_LENGTH 50
struct checkin {
    char name[STRING_LENGTH];
    char date[STRING_LENGTH];
};

struct node {
    int data;
    struct node *next;
};


int main(void) {
    struct my_struct my;
    my.number = 9;
    struct my_struct *my1 = malloc(sizeof(struct my_struct));
    my1->number = 9;


    printf("size of my_struct is %d\n", (int)sizeof(struct my_struct));
    char str[10];
    printf("size of str %d\n", (int)sizeof(str));
    printf("size of int %d\n", (int)sizeof(int));
    printf("size of double %d\n", (int)sizeof(double));
    printf("size of char %d\n", (int)sizeof(char));

    int *arr = malloc(5*sizeof(int));
    int *arr1 = calloc(5, 5 * sizeof(int));

    // check-in
    struct checkin *checkin = malloc(sizeof(struct checkin));
    // print the info
    strcpy(checkin->name, "Name");
    strcpy(checkin->date, "01/07/2024");
    printf("name is %s\n", checkin->name);
    printf("date is %s\n", checkin->date);
    // check-out
    free(checkin);
    printf("address after free %p\n", checkin);
    printf("name is %s\n", checkin->name);

    struct node *node1 = malloc(sizeof(struct node));
    struct node *node2 = malloc(sizeof(struct node));
    struct node *node3 = malloc(sizeof(struct node));
    node1->data = 1;
    node1->next = node2;
    printf("address of node1->next : %p\n", node1->next);
    printf("address of node2 : %p\n", node2);
    node2->data = 2;
    node2->next = node3;
    node3->data = 3;
    node3->next = NULL;

    // traverse the linkedlist
    struct node *curr = node1;
    while(curr != NULL) {
        printf("value %d\n", curr->data);
        curr = curr->next;
    }

}