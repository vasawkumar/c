#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Position to delete
    pos = 3;

    // Check if position is valid
    if(pos >= 1 && pos <= n) {
        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease array size

        printf("Element deleted successfully!\n");
        printf("Updated array: ");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid position! Cannot delete element.\n");
    }

    return 0;
}