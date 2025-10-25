//Probelm-> Missing number in array [1 to n]//
#include<stdio.h>

int main() {
    int n;
    printf("Enter value of n (maximum number): ");
    scanf("%d", &n);

    int arr[n - 1];
    printf("Enter %d numbers (from 1 to %d, one missing):\n", n - 1, n);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;

    for (int i = 0; i < n - 1; i++) {
        arraySum += arr[i];
    }

    int missingNumber = totalSum - arraySum;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
