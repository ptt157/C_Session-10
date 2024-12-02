#include <stdio.h>

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;

    printf("Nhap phan tu can kiem tra: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d nam o vi tri %d\n", x, i);
            found = 1;
        }
    }
    if (!found) printf("Phan tu %d khong ton tai trong mang\n", x);

    return 0;
}

