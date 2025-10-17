//problem -> Cyclically rotate an array by one //
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int last = arr[size - 1];  

    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
 

   
    printf("Array after cyclic rotation by one:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
