#include <stdio.h>

int main() {
    
    // 1. DECLARE an array
    // This creates an array named 'scores' that can hold 5 integers.
    int scores[5];

    // 2. ASSIGN values to the array elements
    // We use the index, which starts at 0.
    scores[0] = 80;  // The 1st element (at index 0)
    scores[1] = 85;  // The 2nd element (at index 1)
    scores[2] = 90;  // The 3rd element
    scores[3] = 75;  // The 4th element
    scores[4] = 95;  // The 5th element (at index 4)

    // 3. ACCESS and PRINT all values using a for loop
    // This is the most common way to work with arrays.
    
    printf("--- Printing all scores ---\n");

    // We loop from i = 0 up to (but not including) 5.
    // This gives us the indices 0, 1, 2, 3, and 4.
    for (int i = 0; i < 5; i++) {
        
        // Inside the loop, 'i' is our index.
        // We print the index and the value at that index.
        printf("Element at index %d is: %d\n", i, scores[i]);
    }

    // You can also access a single element directly
    printf("\n--- A single element ---\n");
    printf("The third score (at index 2) is: %d\n", scores[2]);

    return 0;
}