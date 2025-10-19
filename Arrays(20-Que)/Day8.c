//Problem ->  Kadane's Algorithm - Maximum Subarray Sum//
#include <stdio.h>
int maxSubArraySum(int arr[], int size) {
    int currentSum = arr[0];  
    int maxSum = arr[0];      

    
    for (int i = 1; i < size; i++) {
        
        if (currentSum + arr[i] > arr[i]) {
            currentSum = currentSum + arr[i];
        } else {
            currentSum = arr[i];
        }

        
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int result = maxSubArraySum(arr, size);
    printf("The maximum subarray sum is: %d\n", result);

    return 0;
}
