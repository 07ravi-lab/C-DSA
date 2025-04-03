#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

// Function to add a node at the end of the list
void add_at_end(struct node *head, int data) {
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// Function to add a node at a specific position
void add_at_pos(struct node* head, int data, int pos) {
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    
    ptr2->data = data;
    ptr2->link = NULL;

    if (pos == 1) { // In case the position is at the beginning
        ptr2->link = head;
        head = ptr2;
        return;
    }

    pos--;
    while (pos != 1 && ptr != NULL) {
        ptr = ptr->link;
        pos--;
    }

    if (ptr == NULL) {
        printf("Position out of bounds\n");
        return;
    }

    ptr2->link = ptr->link;
    ptr->link = ptr2;
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    add_at_end(head, 98);
    add_at_end(head, 3);

    // Initialize
    int data = 67, position = 3;

    add_at_pos(head, data, position);

    // Traversing and printing
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}
