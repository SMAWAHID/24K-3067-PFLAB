#include <stdio.h>
#include <stdlib.h>

void multiply_matrices(int *A, int *B, int *C, int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            *(C + i * p + j) = 0;  // Initialize the element of C[i][j]
            for (int k = 0; k < n; k++) {
                *(C + i * p + j) += (*(A + i * n + k)) * (*(B + k * p + j));
            }
        }
    }
}

int main() {
    int m, n, p;

    // Input dimensions of matrices
    printf("Enter the number of rows and columns for Matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns for Matrix B (n x p): ");
    scanf("%d", &p);

    // Dynamically allocate memory for matrices A, B, and C
    int *A = (int *)malloc(m * n * sizeof(int)); // m x n matrix
    int *B = (int *)malloc(n * p * sizeof(int)); // n x p matrix
    int *C = (int *)malloc(m * p * sizeof(int)); // m x p result matrix

    if (A == NULL || B == NULL || C == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Populate matrix A
    printf("Enter the elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter value at A[%d][%d]: ", i, j);
            scanf("%d", (A + i * n + j)); // Use pointer arithmetic
        }
    }

    // Populate matrix B
    printf("Enter the elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("Enter value at B[%d][%d]: ", i, j);
            scanf("%d", (B + i * p + j)); // Use pointer arithmetic
        }
    }

    // Multiply matrices A and B to get C
    multiply_matrices(A, B, C, m, n, p);

    // Print the result matrix C
    printf("The product matrix C is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", *(C + i * p + j)); // Use pointer arithmetic
        }
        printf("\n");
    }

    // Free dynamically allocated memory
    free(A);
    free(B);
    free(C);

    return 0;
}
