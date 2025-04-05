#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node *link;
};

void print_data(struct node *head){

    if(head == NULL) {
        printf("Linked list is Empty\n");
        return;
    }

    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");
}

struct node* del_first(struct node *head){
    if(head == NULL){
        printf("List is empty!\n");
        return NULL;
    } else {
        struct node *temp = head;
        head = head->link;
        free(temp);
        return head;
    }
}

int main (){
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

    print_data(head);

    head = del_first(head);

    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    printf("\n");

    return 0;
}


//easy way
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *link;
// };

// void print_data(struct node *head) {
//     if (head == NULL) {
//         printf("Linked list is empty\n");
//         return;
//     }
//     struct node *ptr = head;
//     while (ptr != NULL) {
//         printf("%d ", ptr->data);
//         ptr = ptr->link;
//     }
//     printf("\n");
// }

// struct node* del_first(struct node *head) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return NULL;
//     }
//     struct node *temp = head;
//     head = head->link;
//     free(temp);
//     return head;
// }

// int main() {
//     // Creating linked list with 3 nodes
//     struct node *head = malloc(sizeof(struct node));
//     head->data = 45;
//     head->link = NULL;

//     struct node *second = malloc(sizeof(struct node));
//     second->data = 98;
//     second->link = NULL;
//     head->link = second;

//     struct node *third = malloc(sizeof(struct node));
//     third->data = 3;
//     third->link = NULL;
//     second->link = third;

//     printf("Original list: ");
//     print_data(head);

//     head = del_first(head); // Delete first node

//     printf("After deleting first node: ");
//     print_data(head);

//     return 0;
// }
