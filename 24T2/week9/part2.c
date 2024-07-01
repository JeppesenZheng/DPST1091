/*malloc memory for a new node called node1

node1 data = 3
node1 next = NULL

make the head pointer points to node1

malloc memory for a new node called node2

node2 data = 9
node2 next = NULL

add node2 to the tail of the list, making node1 next point to node2

malloc memory for a new node called node3

node3 data = 5
node3 next = NULL

add node3 to the head of the list, making node3 next point to the current head of the list
make the head point to node3*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main(void) {
    printf("%d\n", (int)sizeof(struct node));
}