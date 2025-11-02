//Problem -> Merge two sorted arrays without using extra space //
#include <stdio.h>
void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr1[] = {1, 4, 7, 8, 10};
    int arr2[] = {2, 3, 9};
    int n = 5, m = 3;

    int i = n - 1, j = 0;

    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            int temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
        }
        i--;
        j++;
    }


    sort(arr1, n);
    sort(arr2, m);


    printf("Array 1: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nArray 2: ");
    for (i = 0; i < m; i++)
        printf("%d ", arr2[i]);

    return 0;
}
