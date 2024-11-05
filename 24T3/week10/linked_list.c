#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *new_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

void traverse(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}


int main(void) {

    // using malloc to create the node1
    struct node *node1 = malloc(sizeof(struct node));
    // node1's data = 3
    // node1's next = NULL
    node1->data = 3;
    node1->next = NULL;

    // struct node *node1 = new_node(3);

    // create a head pointer points to node1
    struct node *head = node1;

    // create node2
    struct node *node2 = malloc(sizeof(struct node));
    node2->data = 9;
    node2->next = NULL;

    // connect node1 and node2
    node1->next = node2;

    // create node3
    struct node *node3 = malloc(sizeof(struct node));

    node3->data = 5;
    node3->next = NULL;

    // move node3 into the head
    // 1st step
    node3->next = node1;
    // 2nd step
    head = node3;

    // traverse the linked list
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    free(node1);
    free(node2);
    free(node3);

    // if we have a linked list, how do we insert the node at the tail
    // there are two cases you should consider
    // case 1: the linked list is empty
    // case 2: we have a node or many nodes inside the linked list
    
    return 0;
}
