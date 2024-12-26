#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = 0; 
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // Neu khong co hoan doi nao thi dung lai
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
    
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Nhap %d phan tu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Truoc khi sap xep: ");
    printArray(arr, n);
    
    bubbleSort(arr, n);
    
    printf("Sau khi sap xep: ");
    printArray(arr, n);

    return 0;
}

