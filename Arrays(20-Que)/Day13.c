#include <stdio.h>

int main() {
    int arr[100];  
    int n, target;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the target sum: ");
    scanf("%d", &target);

    
    printf("Pairs with sum %d are:\n", target);
    int found = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    
    if (!found) {
        printf("No pairs found with the given sum.\n");
    }

    return 0;
}
