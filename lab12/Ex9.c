#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Dynamically allocate memory using malloc
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
    return 1;
    }
    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
    scanf("%d", &ptr[i]);
    }
    // Print elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    // Free the allocated memory
    free(ptr);
    return 0;
}