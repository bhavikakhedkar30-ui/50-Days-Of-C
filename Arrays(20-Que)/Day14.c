#include <stdio.h>

int main() {
   
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  

    
    int targetSum = 33;

   
    int start = 0;       
    int currentSum = 0;  
    int found = 0;       

    
    for (int end = 0; end < n; end++) {
        
        currentSum += arr[end];

       
        while (currentSum > targetSum && start < end) {
            currentSum -= arr[start];
            start++;
        }

       
        if (currentSum == targetSum) {
            printf("Subarray found between indexes %d and %d\n", start, end);
            printf("Elements: ");
            for (int i = start; i <= end; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            found = 1;
            break; 
        }
    }

    
    if (!found) {
        printf("No subarray with the given sum found.\n");
    }

    return 0;
}
