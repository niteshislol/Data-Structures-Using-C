#include <stdio.h>

void insertElement(int arr[], int n, int element, int pos) {
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = element;
}

int main() {
    int arr[6] = {1, 2, 4, 5, 6};
    int n = 5;
    insertElement(arr, n, 3, 3);
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
