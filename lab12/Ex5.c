#include <stdio.h>
int main() {
    int row1[] = {1, 2, 3};
    int row2[] = {4, 5};
    int row3[] = {6, 7, 8, 9};
    int *arr[] = {row1, row2, row3}; // Array of pointers
    printf("Accessing elements from the array of pointers:\n");
    printf("arr[0][2]: %d\n", arr[0][2]);
    printf("arr[1][1]: %d\n", arr[1][1]);
    printf("arr[2][3]: %d\n", arr[2][3]);
    return 0;
}