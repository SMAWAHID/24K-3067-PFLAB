#include <stdio.h>

void Swap(int (*ptr)[3], int r1, int r2, int col)
{
    for (int j = col -1; j >= 0; j--)
    {
        int temp = (*(ptr + r1))[j];
        (*(ptr + r1))[j] = (*(ptr + r2))[j];
        (*(ptr + r2))[j] = temp;
    }
}


int main()
{
    int arr[3][3] = { {3, 7, 4}, {6, 12, 32}, {24, 10, 18} };
    int r1, r2;

    int (*p)[3] = arr;
    
    printf("Initial elements using the pointer:\n");
    printf("arr[0][0]: %d, arr[0][1]: %d, arr[0][2]: %d\n", (*p)[0], (*p)[1], (*p)[2]);
    printf("arr[1][0]: %d, arr[1][1]: %d, arr[1][2]: %d\n", (*(p + 1))[0], (*(p + 1))[1], (*(p + 1))[2]);
    printf("arr[2][0]: %d, arr[2][1]: %d, arr[2][2]: %d\n", (*(p + 2))[0], (*(p + 2))[1], (*(p + 2))[2]);

    printf("Enter Row Numbers to swap(0,1,2): ");
    scanf("%d", &r1);
    printf("Enter Row Numbers to swap(0,1,2): ");
    scanf("%d", &r2);

    Swap(p, r1, r2, 3);
    
    
    printf("Accessing elements using the pointer:\n");
    printf("arr[0][0]: %d, arr[0][1]: %d, arr[0][2]: %d\n", (*p)[0], (*p)[1], (*p)[2]);
    printf("arr[1][0]: %d, arr[1][1]: %d, arr[1][2]: %d\n", (*(p + 1))[0],(*(p + 1))[1],(*(p + 1))[2]);
    printf("arr[2][0]: %d, arr[2][1]: %d, arr[2][2]: %d\n", (*(p + 2))[0], (*(p + 2))[1], (*(p + 2))[2]);

    return 0;
}