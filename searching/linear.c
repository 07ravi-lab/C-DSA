#include<stdio.h>
#include <stdlib.h>

int main() {
    int data,i=0;
    int a[5] = {2,3,4,5,6};
    printf("Enter searching data :");
    scanf("%d",&data);
    while (i<5)
    {
        if (a[i] == data)
        {
            printf("Data found at %d",i);
            exit(0);
        }
        ++i;
    }
    if (i>=5)
    {
        printf("data is not found");
        exit(0);
    }
    return 0;
}