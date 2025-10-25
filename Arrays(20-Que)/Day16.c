//Problem -> Find duplicate number in array
#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count[n];  
    for (int i = 0; i < n; i++)
        count[i] = 0;  

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;

        if (count[arr[i]] > 1) {
            printf("Duplicate number is: %d\n", arr[i]);
            return 0;
        }
    }

    printf("No duplicate number found.\n");
    return 0;
}
