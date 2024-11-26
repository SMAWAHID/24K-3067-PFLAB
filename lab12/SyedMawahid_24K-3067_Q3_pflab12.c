#include <stdio.h>

int Find(int (*ptr)[3], int target, int *row, int* col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((*(ptr + i))[j] == target)
            {
                *row = i;
                *col = j;
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int arr[3][3];
    int row, col;
    int (*p)[3];
    int target;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value at [%d][%d]", i, j);
            scanf("%d", &arr[i][j]);  
        }
    }
    p = arr;

    printf("Enter the target: ");
    scanf("%d", &target);

    if (Find(p, target, &row, &col))
    {
        printf("Target %d found at position [%d][%d]\n", target, row, col);
    }
    else
    {
        printf("Target %d not found in the array.\n", target);
    }

    return 0;
}
