//Problem -> Maximum Product Subarray //
#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int maxProductSubarray(int arr[], int n) {
    int max_so_far = arr[0];
    int max_end = arr[0];
    int min_end = arr[0];

    for (int i = 1; i < n; i++) {
        
        if (arr[i] < 0) {
            int temp = max_end;
            max_end = min_end;
            min_end = temp;
        }

    
        max_end = max(arr[i], arr[i] * max_end);
        min_end = min(arr[i], arr[i] * min_end);

        
        if (max_end > max_so_far)
            max_so_far = max_end;
    }

    return max_so_far;
}

int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxProductSubarray(arr, n);
    printf("Maximum Product Subarray: %d\n", result);

    return 0;
}
