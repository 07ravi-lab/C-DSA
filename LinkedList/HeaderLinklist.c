#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node* link;
};

// Function to create a new node
struct node* createNode(int value) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->link = NULL;
    return newNode;
}

// Function to create a header linked list
struct node* CreateHeaderLinklist() {
    struct node* header = createNode(0); // Header node with dummy data
    header->link = NULL;
    return header;
}

// Function to insert a node at the end of the list
void insertEnd(struct node* header, int value) {
    struct node* temp = header;
    
    // Traverse to the end
    while (temp->link != NULL) {
        temp = temp->link;
    }

    // Insert new node at the end
    temp->link = createNode(value);
}

// Function to display the list
void displayList(struct node* header) {
    struct node* temp = header->link; // Skip the header node
    printf("Header Linked List: ");
    
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->link;
    }
    
    printf("NULL\n");
}

// Main function
int main() {
    struct node* header = CreateHeaderLinklist();
    insertEnd(header, 10);
    insertEnd(header, 20);
    insertEnd(header, 30);

    displayList(header);

    return 0;
}


