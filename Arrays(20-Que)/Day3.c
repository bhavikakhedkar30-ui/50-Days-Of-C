 //Find the 'Kth' max and min element of an array//
#include <stdio.h>


int main() {
    int arr[100]; 
    int n, k;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of K: ");
    scanf("%d", &k);

    
    if(k <= 0 || k > n) {
        printf("Invalid value of K. It should be between 1 and %d.\n", n);
        return 0; 
    }

    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
        if(arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
    printf("Kth minimum (smallest) number is: %d\n", arr[k - 1]);
    printf("Kth maximum (largest) number is: %d\n", arr[n - k]);

    return 0;
}
