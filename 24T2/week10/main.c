// main.c
// This program was written by YOUR-NAME (zID)
// // Program to test linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

int main(void) {

    // Create a pointer to the head of the linked list
    struct node *head = NULL;

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 10);

    print_list(head);

    // Insert a node at the beginning of the linked list
    head = insert_head(head, 5);

    print_list(head);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 15);

    print_list(head);

    // Insert a node at the end of the linked list
    head = insert_tail(head, 20);

    head = insert_tail(head, 30);

    // Print the linked list
    print_list(head);

    head = remove_head(head);

    // Print the linked list
    print_list(head);

    head = remove_tail(head);

    // Print the linked list
    print_list(head);

    head = remove_data(head, 15);

    // Print the linked list
    print_list(head);

    // Calculate and print the length of the linked list
    int length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    head = remove_tail(head);

    print_list(head);

    length = list_length(head);
    printf("There are %d nodes in the list\n", length);

    return 0;
}
