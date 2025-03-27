#include <stdio.h>

// Function to check if the array is sorted
int isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}

int main() {
    int n;
    
    // Input: Array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input: Array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if sorted
    if (isSorted(arr, n)) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is NOT sorted.\n");
    }

    return 0;
}
