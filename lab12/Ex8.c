#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
    return 1;
    }
    
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Initialize elements
        printf("%d ", arr[i]);
    }
    
    free(arr); // Free the allocated memory
    return 0;
}  