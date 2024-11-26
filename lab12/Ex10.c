#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr;
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    // Dynamically allocate memory using calloc
    ptr = (int *)calloc(n, sizeof(int));

    if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
    }
    printf("Memory initialized to zero:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}