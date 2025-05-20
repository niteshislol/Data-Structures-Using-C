#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5};
    int n = 5;
    int newElement = 6;

    arr[n] = newElement;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
