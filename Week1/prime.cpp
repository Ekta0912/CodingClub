#include <stdio.h>

int main() {
    int n, i;

    printf("How many numbers are in your array? ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0], largest = arr[0];
    int smallPos = 0, largePos = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            smallPos = i;  
        }
        if(arr[i] > largest) {
            largest = arr[i];
            largePos = i;   
        }
    }

    printf("\nResult:\n");
    printf("👉 Smallest number is %d at position %d\n", smallest, smallPos);
    printf("👉 Largest number is %d at position %d\n", largest, largePos);

    return 0;
}
