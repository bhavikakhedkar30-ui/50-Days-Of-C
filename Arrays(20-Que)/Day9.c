// Problem-> Check if array is sorted and rotated //
#include <stdio.h>

int isSortedAndRotated(int arr[], int size) {
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        int next = (i + 1) % size;  

       
        if (arr[i] > arr[next]) {
            count++;
        }
    }

    
    if (count == 1) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    
    int arr[] = {3, 4, 5, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

   
    if (isSortedAndRotated(arr, size)) {
        printf("✅ The array is sorted and rotated.\n");
    } else {
        printf("❌ The array is NOT sorted and rotated.\n");
    }

    return 0;
}
