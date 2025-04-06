#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* link;
};

// Function to search for a node by its value
struct Node* searchByValue(struct Node* head, int value) {
    struct Node* temp = head; // Temporary pointer to traverse the list

    // Traverse the list to find the node with the given value
    while (temp != NULL) {
        if (temp->data == value) {
            return temp; // Return the node if found
        }
        temp = temp->link; // Move to the next node
    }

    return NULL; // Return NULL if the value is not found
}

int main() {
    int searchValue = 20;

    // Example linked list creation for demonstration
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->link = (struct Node*)malloc(sizeof(struct Node));
    head->link->data = 20;
    head->link->link = NULL;

    struct Node* foundNode = searchByValue(head, searchValue);

    if (foundNode != NULL) {
        printf("Node with value %d found.\n", foundNode->data);
    } else {
        printf("Node with value %d not found.\n", searchValue);
    }

    // Free allocated memory
    free(head->link);
    free(head);

    return 0;
}
