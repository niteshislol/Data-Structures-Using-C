#include <stdio.h>

int main() {
    // Define sizes
    int rowsA = 2, colsA = 3;
    int rowsB = 3, colsB = 2;

    // Matrix A (2x3)
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matrix B (3x2)
    int B[3][2] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Result matrix C (2x2)
    int C[2][2] = {0};

    // Matrix multiplication logic
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
