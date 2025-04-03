#include <stdio.h>
#include <stdlib.h>

void add_at_pos(int arr[], int arr2[], int size, int data, int pos) {
    int i, index = pos - 1;  // Convert position to zero-based index

    // Copy elements before the insertion point
    for (i = 0; i < index; i++) {
        arr2[i] = arr[i];
    }

    // Insert new element
    arr2[index] = data;

    // Copy remaining elements after insertion
    for (i = index; i < size; i++) {
        arr2[i + 1] = arr[i];
    }
}

int main() {
    int arr[] = {2, 3, 5, 6, 7, 45, 67, 23, 56, 43}; // Missing semicolon fixed
    int pos = 5, data = 78, i;
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[size + 1]; // New array with one extra element

    add_at_pos(arr, arr2, size, data, pos);

    // Print modified array
    for (i = 0; i < size + 1; i++) {
        printf("%d ", arr2[i]); // Fixed format specifier
    }
    printf("\n");

    return 0;
}
