//Problem-> Find maximum and minimum element in array//
#include <stdio.h>

int main() {
    int arr[100], n;
    int i;
    int max, min;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    max = arr[0];
    min = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}
