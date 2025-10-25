//Probelm->Rearrange array in alternating positive & negative items//
#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void rearrangeArray(int arr[], int n) {
    int i;

   
    for (i = 0; i < n; i++) {
        
        if (((i % 2 == 0) && arr[i] < 0) || ((i % 2 == 1) && arr[i] >= 0)) {
            
            int j = i + 1;
            while (j < n) {
                if (((i % 2 == 0) && arr[j] >= 0) || ((i % 2 == 1) && arr[j] < 0)) {
                    break;
                }
                j++;
            }

           
            if (j < n) {
                for (int k = j; k > i; k--) {
                    swap(&arr[k], &arr[k - 1]);
                }
            } else {
                
                break;
            }
        }
    }
}


void printArray(int arr[], int n) {
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {1, -2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);
    printArray(arr, n);

    return 0;
}
