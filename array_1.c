#include <stdio.h>

int main() {
    // Declare an array of 5 integers
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Print array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Calculate sum of elements
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    printf("Sum of array elements = %d\n", sum);

    return 0;
}

