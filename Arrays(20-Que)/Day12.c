//Probelm ->  Count the number of occurrences of an element//
#include <stdio.h>

int main() {
    
    int arr[] = {1, 2, 3, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

   
    int target = 2;

    
    int count = 0;

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++; 
        }
    }

    
    printf("Number %d appears %d times in the array.\n", target, count);

    return 0;
}
