//Problem -> Find intersection of two sorted arrays //
#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 5, 6};
    int b[] = {2, 4, 6, 8, 10};
    int n1 = 5, n2 = 5;

    int i = 0, j = 0;

    printf("Intersection: ");
    
    while (i < n1 && j < n2) {
        if (a[i] == b[j]) {
            printf("%d ", a[i]);
            i++;
            j++;
        } 
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }

    return 0;
}
