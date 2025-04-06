#include <stdio.h>

int remove_first(int arr[], int n) {
    if(n == 0){
        printf("Array is empty\n");
        return n;
    }
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main() {
    int arr[8];
    int n, i;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    // if(n > 8 || n <= 0){
    //     printf("Invalid number of elements.\n");
    //     return 1;
    // }

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    n = remove_first(arr, n);

    printf("Array after removing the first element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
