#include <stdio.h>
int main() {
    int a = 10;
    float b = 5.5;
    char c = 'X';
    void *ptr; // Declare a void pointer
    // Point to different data types
    ptr = &a;
    printf("Value of a using void pointer: %d\n", *(int *)ptr);

    ptr = &b;
    printf("Value of b using void pointer: %.2f\n", *(float *)ptr);

    ptr = &c;
    printf("Value of c using void pointer: %c\n", *(char *)ptr);

    return 0;
}