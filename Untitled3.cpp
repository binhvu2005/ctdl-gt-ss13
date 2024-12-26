#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx;
    
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}


int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, key;


    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int arr[n];


    printf("Nhap %d phan tu: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    selectionSort(arr, n);

    printf("Mang sau khi sap xep: ");
    printArray(arr, n);


    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);

 
    int result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", key, result + 1);
    } else {
        printf("Khong tim thay phan tu %d\n", key);
    }

    return 0;
}

