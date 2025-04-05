#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void print_data(struct node *head) {
    if (head == NULL) {
        printf("Linked list is Empty\n");
        return;
    }

    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

struct node* del_first(struct node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    } else {
        struct node *temp = head;
        head = head->link;
        free(temp);
        return head;
    }
}

struct node* del_last(struct node *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return NULL;
    }
    else if (head->link == NULL) {
        free(head);
        return NULL;
    }
    else {
        struct node *temp = head;
        while (temp->link->link != NULL) {
            temp = temp->link;
        }

        free(temp->link);
        temp->link = NULL;
        return head;
    }
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;

    printf("Original List:\n");
    print_data(head);

    head = del_last(head);

    printf("After deleting last node:\n");
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}
