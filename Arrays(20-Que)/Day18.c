//Probelm -> Trapping Rain Water //
#include <stdio.h>

int main() {
    int arr[] = {3, 0, 2, 0, 4};
    int n = 5;

    int left[n], right[n];
    int water = 0;

   
    left[0] = arr[0];
    for (int i = 1; i < n; i++) {
        left[i] = (arr[i] > left[i - 1]) ? arr[i] : left[i - 1];
    }

   
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = (arr[i] > right[i + 1]) ? arr[i] : right[i + 1];
    }

    
    for (int i = 0; i < n; i++) {
        int min = (left[i] < right[i]) ? left[i] : right[i];
        water += min - arr[i];
    }

    printf("Total trapped water: %d\n", water);

    return 0;
}
