#include <stdio.h>
#include <stdbool.h>

void sapXepNoiBot(int arr[], int n) {
    int soLanLap = 0;
    for (int i = 0; i < n - 1; i++) {
        bool daHoanDoi = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                daHoanDoi = true;
                printf("Qua trinh hoan doi: ");
                for (int k = 0; k < n; k++) {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }
        soLanLap++;
        if (!daHoanDoi) {
            break;
        }
    }
    printf("Sap xep hoan thanh sau %d lan lap.\n", soLanLap);
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    sapXepNoiBot(arr, n);

    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

