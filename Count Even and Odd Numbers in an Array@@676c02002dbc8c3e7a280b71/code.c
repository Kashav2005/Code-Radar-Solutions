#include <stdio.h>

int main() {
    int N, i;
    int evenCount = 0, oddCount = 0;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    // Declare the array
    int arr[N];

    // Read the array elements
    printf("Enter %d space-separated integers: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for (i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Output the counts
    printf("%d %d\n", evenCount, oddCount);

    return 0;
}