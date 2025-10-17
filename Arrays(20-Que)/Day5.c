//Problem -> Move all negative numbers to beginning and positive to end
#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, 5, -6}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int temp[100];
    int index = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            temp[index] = arr[i];
            index++;
        }
    }

   
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp[index] = arr[i];
            index++;
        }
    }

    
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    
    printf("Array after moving negatives to beginning:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
