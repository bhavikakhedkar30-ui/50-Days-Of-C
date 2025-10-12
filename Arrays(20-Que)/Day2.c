 //Reverse an array in place//
#include <stdio.h>

int main() {
    int arr[100], n, i;
    
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int start = 0;
    int end = n - 1;
    while(start < end) {
        
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

        
        
    }
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
