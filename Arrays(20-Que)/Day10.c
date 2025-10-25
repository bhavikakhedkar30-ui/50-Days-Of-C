//Problem -> Leaders in an array//
#include <stdio.h>

int main() {
    
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]); 

    
    int leaders[size]; 
    int count = 0;      

    
    int max = arr[size - 1]; 
    leaders[count] = max;    
    count++;                 

    
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];           
            leaders[count] = max;   
            count++;               
        }
    }

   
    printf("Leaders in the array are: ");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]); 
    }
    printf("\n");

    return 0;
}
