// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    // TODO
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}

struct node *insert_head(struct node *head, int data) {
    // TODO
    struct node *new = create_node(data);
    // 1. when we don't any node in inside the linked list
    if (head == NULL) {
        head = new;
        return head;
    }
    // 2. if we have some nodes inside the linked list
    new->next = head;
    head = new;
    return head;
}

struct node *insert_tail(struct node *head, int data) {
    // TODO
    struct node *new = create_node(data);
    // 1. when we don't any node in inside the linked list
    if (head == NULL) {
        head = new;
        return head;
    }
    struct node *curr = head;
    // 1. while (curr != NULL)
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;
    return head;
}

// struct node *insert_middle(struct node *head, int data, int number) {
//     struct node *new = create_node(data);
//     if (head == NULL) {
//         head = new;
//         return head;
//     }

//     struct node *curr = head;
//     while (curr->next != NULL && curr->next->data != number) {
//         curr = curr->next;
//     }

//     new->next = curr->next;
//     curr->next = new;

//     return head;
// }

void print_list(struct node *head) {
    // Set current to be the first node in the list
    struct node *current = head;
    
    // Traverse the linked list and print each node 
    // until we reach the end of the list
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("X\n");
}

int list_length(struct node *head) {
    // TODO
    int counter = 0;
    for (struct node *curr = head; curr != NULL; curr = curr->next) {
        counter ++;
    }

    return counter;
}

struct node *delete_head(struct node *head) {
    // h -> 3 -> 4 -> 5 -> NULL
    if (head == NULL) {
        return head;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);

    return head;

}
