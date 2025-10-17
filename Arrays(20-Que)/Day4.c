// problem -> Sort an array of 0s, 1s and 2s (Dutch National Flag Problem)
#include <stdio.h>


void sort012(int arr[], int n) {
    int i, count0 = 0, count1 = 0, count2 = 0;

    
    for (i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        else if (arr[i] == 1)
            count1++;
        else if (arr[i] == 2)
            count2++;
    }

    
    i = 0;
    while (count0 > 0) {
        arr[i] = 0;
        i++;
        count0--;
    }

    
    while (count1 > 0) {
        arr[i] = 1;
        i++;
        count1--;
    }

    
    while (count2 > 0) {
        arr[i] = 2;
        i++;
        count2--;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter %d elements (only 0, 1, or 2):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort012(arr, n);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
