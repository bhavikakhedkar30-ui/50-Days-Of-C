// Problem ->  Find Union and Intersection of two arrays //
#include <stdio.h>


int isPresent(int arr[], int size, int num) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {4, 5, 6, 7, 8};
    int unionArr[100];
    int intersectionArr[100];
    int i, j;
    int unionSize = 0;
    int intersectionSize = 0;

    int sizeA = sizeof(a) / sizeof(a[0]);
    int sizeB = sizeof(b) / sizeof(b[0]);

    
    for (i = 0; i < sizeA; i++) {
        if (!isPresent(unionArr, unionSize, a[i])) {
            unionArr[unionSize] = a[i];
            unionSize++;
        }
    }

    
    for (i = 0; i < sizeB; i++) {
        if (!isPresent(unionArr, unionSize, b[i])) {
            unionArr[unionSize] = b[i];
            unionSize++;
        }
    }

    
    for (i = 0; i < sizeA; i++) {
        for (j = 0; j < sizeB; j++) {
            if (a[i] == b[j]) {
                
                if (!isPresent(intersectionArr, intersectionSize, a[i])) {
                    intersectionArr[intersectionSize] = a[i];
                    intersectionSize++;
                }
            }
        }
    }

   
    printf("Union of arrays:\n");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", unionArr[i]);
    }

    
    printf("\n\nIntersection of arrays:\n");
    for (i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionArr[i]);
    }

    return 0;
}
