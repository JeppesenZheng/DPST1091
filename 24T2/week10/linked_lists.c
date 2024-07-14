// linked_list.c
// This program was written by YOUR-NAME (zID)
// Implementation for simple linked lists functions
// run gcc -o linked_lists main.c linked_lists.c

#include <stdio.h>
#include <stdlib.h>

#include "linked_lists.h"

struct node *create_node(int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    
    return new;
}

struct node *insert_head(struct node *head, int data) {
    struct node *new = create_node(data);
    new->next = head;
    head = new;

    return head;
}

struct node *insert_tail(struct node *head, int data) {
    struct node *new = create_node(data);
    struct node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    return head;
}

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
    int counter = 0;
    struct node *curr = head;
    while (curr != NULL) {
        curr = curr->next;
        counter ++;
    }
    return counter;
}

struct node *remove_head(struct node *head) {
	struct node *temp = head;
    head = head->next;
    free(temp);

    return head;
}

struct node *remove_tail(struct node *head) {
	struct node *prev = head;
    while (prev->next->next != NULL) {
        prev = prev->next;
    }

    struct node *temp = prev->next;
    prev->next = NULL;
    free(temp);

    return head;
}

struct node *remove_data(struct node *head, int data) {
    if (head->data == data) {
        return remove_head(head);
    }

    struct node *curr = head;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    if (curr->data == data) {
        return remove_tail(head);
    }

    
	struct node *prev = head;
    while(prev->next->data != data) {
        curr = curr->next;
    }

    struct node *temp = prev->next;
    prev->next = prev->next->next;

    free(temp);

    return head;
}
















