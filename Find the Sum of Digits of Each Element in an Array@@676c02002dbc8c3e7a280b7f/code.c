#include <stdio.h>
void sumofdigits(int n, int arr[], int result[]) {
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int sum = 0;
        if (num < 0) {
            num = -num;
        }
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        result[i] = sum; 
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size. Please enter a positive number.\n");
        return 1;
    }
    int arr[n];   
    int result[n];   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sumofdigits(n, arr, result);
    printf("Sum of digits of each element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i], result[i]);
    }
    return 0;
}