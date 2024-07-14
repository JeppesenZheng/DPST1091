#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int data;
	struct node *next;
};

struct node *create_node(int data) {
	struct node *new = malloc(sizeof(struct node));
	new->next = NULL;
	new->data = data;

	return new;
}

struct node *appendNode(struct node *head, int new_data) {
    struct node *new_node = create_node(new_data);
    if (head == NULL) {
        head = new_node;
    } else {
        struct node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = new_node;
    }

    return head;
}


int list_evens(struct node *head1, struct node *head2) {
	return 0;
}

struct node *list_ordered_insert(struct node *head, int data) {
	return NULL;
}

struct node *list_delete_smallest(struct node *head) {
	return NULL;
}

struct node *list_copy(struct node *head1) {
	return NULL;
}

// append list2 to list1 => list1->list2
struct node *list_append(struct node *head1, struct node *head2) {
	return NULL;
}

// reverse the linked list
struct node *list_reverse(struct node *head) {
	return NULL;
}

struct node *list_find_intersection(struct node *head1, struct node *head2) {
	return NULL;
}

int list_count_occurrences(struct node *head, int data) {
	return 0;
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

int main() {
	struct node *head = NULL;
	// create a linked list like this
	// 1->2->3->5->6
	head = appendNode(head, 1);
    head = appendNode(head, 2);
    head = appendNode(head, 3);
    head = appendNode(head, 5);
    head = appendNode(head, 6);

    struct node *head1 = NULL;
    // create second linked list like this
    // 1->3->4->5->6->9
    head1 = appendNode(head1, 2);
    head1 = appendNode(head1, 4);
    head1 = appendNode(head1, 6);
    head1 = appendNode(head1, 8);
    head1 = appendNode(head1, 10);
    head1 = appendNode(head1, 12);

}
