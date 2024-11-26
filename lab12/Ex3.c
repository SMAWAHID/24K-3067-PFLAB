#include <stdio.h>
int main() {
    int *p = NULL; // Null pointer, points to nothing
    if (p == NULL) {
        printf("Pointer is NULL, it does not point to any valid memory location.\n");
    }
    return 0;
}