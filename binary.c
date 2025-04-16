#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    
    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid; // key found
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // key not found
}

int main() {
    int arr[] = {5, 10, 20, 40, 70};
    int key = 40;
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = binarySearch(arr, n, key);

    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
