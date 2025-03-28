#include <stdio.h>

void sumofdigits(int n, int arr[], int result[]) {
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int sum = 0;

        // Handle negative numbers
        if (num < 0) {
            num = -num;
        }

        // Calculate the sum of digits
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        result[i] = sum; // Store the result
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Input validation
    if (n <= 0) {
        return 1;
    }

    int arr[n];      // Declare input array
    int result[n];   // Declare result array

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of digits
    sumofdigits(n, arr, result);

    // Print results
    printf("%d");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i], result[i]);
    }

    return 0;
}