#include <stdio.h>

int main() {
    int n;

    // Ask user for size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Declare array
    int arr[n];

    // Take input from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Find sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nSum of elements = %d\n", sum);

    return 0;
}

