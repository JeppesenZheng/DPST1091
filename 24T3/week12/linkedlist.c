#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    int          data;
};


struct node *new_node(int value);
void print_linked_list(struct node *head);
struct node *ordered_insert(struct node *head, int value);

int main(void) {
    struct node *node1 = new_node(1);
    struct node *node2 = new_node(3);
    node1->next = node2;
    struct node *node3 = new_node(4);
    node2->next = node3;
    struct node *node4 = new_node(5);
    node3->next = node4;

    struct node *head = node1;
    ordered_insert(head, 2);

    print_linked_list(head);

    return 0;
}

struct node *new_node(int value) {
    struct node *new = malloc(sizeof(struct node));
    new->data = value;
    new->next = NULL;
    return new;
}

// print all the elements in the linked list
void print_linked_list(struct node *head) {
    struct node *curr = head;
    while (curr->next != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("%d\n", curr->data);
}

// ordered_insert should create a new node with the specified value,
// and add it to the list such that the list remains in ascending order.
//
// ordered_insert should return the head of the list.
struct node *ordered_insert(struct node *head, int value) {
    struct node *current = head;
    struct node *prev = NULL;
    while (current != NULL && current->data < value) {
        prev = current;
        current = current->next;
    }
    // what is prev 1
    // what is current 3
    struct node *new = new_node(value);
    prev->next = new;
    new->next = current;

    // PUT YOUR CODE HERE (change the next line!)
    return head;
}