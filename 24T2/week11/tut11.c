#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/*
week 11 tut tut hurdle question
If there is a linked list: 1->2->3->4->NULL
how to remove the node with the value 2
finish the function below
struct node *removeNodeTwo(struct node *head) {

}
*/

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

int check_evens(struct node *head) {
    int is_evens = 1;
    struct node *current = head;
    while(current != NULL) {
        if (current->data % 2 != 0) {
            is_evens = 0;
        }
        current = current->next;
    }

    return is_evens;
}

int list_evens(struct node *head1, struct node *head2) {
	if (check_evens(head1) && check_evens(head2)) {
        return -1;
    } else if (check_evens(head1) || check_evens(head2)) {
        return 1;
    } else {
        return 0;
    }
}

struct node *list_ordered_insert(struct node *head, int data) {
    struct node *new = create_node(data);
	// 1. insert at the head
    if (head->data >= data) {
        new->next = head;
        head = new;
        return head;
    }

    struct node *prev = head;
    while(prev->next->data < data) {
        prev = prev->next;
    }

    new->next = prev->next;
    prev->next = new;

    return head;
}

struct node *list_copy(struct node *head1) {
	return NULL;
}

// append list2 to list1 => list1->list2
struct node *list_append(struct node *head1, struct node *head2) {
	// find the last node
    struct node *last = head1;
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = head2;
    return head1;
}

// reverse the linked list
struct node *list_reverse(struct node *head) {
    struct node* prev = NULL;
    struct node* current = head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;  // Store next node
        current->next = prev;  // Reverse current node's pointer
        prev = current;        // Move pointers one position ahead
        current = next;
    }
    head = prev;
    return head;

}

struct node *list_find_intersection(struct node *head1, struct node *head2) {
	return NULL;
}

int list_count_occurrences(struct node *head, int data) {
	return 0;
}

struct node *removeHead(struct node *head) {
    // 1. create temp pointer points the node we want to remove
    struct node *temp = head;
    // 2. move head pointer to the second node
    head = head->next;
    // 3. free the temp
    free(temp);

    return head;
}

struct node *removeInside(struct node *head, int target) {
    // 1. find the previous node
    struct node *prev = head;
    while(prev->next->data != target) {
        prev = prev->next;
    }
    // 2. create the temp pointer
    struct node *temp = prev->next;
    // 3. skip the target node
    prev->next = prev->next->next;
    // 4. free the node
    free(temp);

    return head;
}

struct node *removeTail(struct node *head) {
    // 1. find the last two node
    struct node *prev = head;
    while(prev->next->next != NULL) {
        prev = prev->next;
    }
    // 2. create the temp pointer
    struct node *temp = prev->next;
    // 3. redirect the prev->next to NULL
    prev->next = NULL;
    // 4. free the temp
    free(temp);

    return head;
}

struct node *list_delete_smallest(struct node *head) {
    int smallest = head->data;
    struct node *current = head;
    while(current != NULL) {
        if (current->data < smallest) {
            smallest = current->data;
        }
        current = current->next;
    }

    return removeInside(head, smallest);
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

    head = list_ordered_insert(head, 0);
    print_list(head);

    struct node *head1 = NULL;
    // create second linked list like this
    // 1->3->4->5->6->9
    head1 = appendNode(head1, 2);
    head1 = appendNode(head1, 4);
    head1 = appendNode(head1, 6);
    head1 = appendNode(head1, 8);
    head1 = appendNode(head1, 10);
    head1 = appendNode(head1, 12);

    printf("the result is %d\n", list_evens(head, head));

    struct node *head2 = NULL;
    // create second linked list like this
    // 4->5->1->8->10->12
    head2 = appendNode(head2, 4);
    head2 = appendNode(head2, 5);
    head2 = appendNode(head2, 1);
    head2 = appendNode(head2, 8);
    head2 = appendNode(head2, 10);
    head2 = appendNode(head2, 12);

    print_list(head2);
    head2 = list_delete_smallest(head2);
    print_list(head2);

    head1 = list_append(head1, head2);
    print_list(head1);

}
