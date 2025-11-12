#include <stdio.h>

int main() {
    int arr[100], n, pos, value;

    // Input number of elements
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and new value
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to right
    for(int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert new element
    arr[pos - 1] = value;
    n++;

    // Display the new array
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}