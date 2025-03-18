#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Check if the first element is a peak
    if (n == 1 || arr[0] > arr[1]) {
        return arr[0];
    }
    
    // Check for peaks in the middle
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }
    
    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // No peak found
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}