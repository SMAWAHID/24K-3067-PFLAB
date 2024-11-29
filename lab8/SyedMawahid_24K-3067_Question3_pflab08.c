#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int saddlePoint = -1;
    int saddleRow = -1, saddleCol = -1;
    int i, j, k;
    int isSmallestInRow, isLargestInColumn;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {    
            printf("Matrix [%d,%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            isSmallestInRow = 1;
            isLargestInColumn = 1;

            for (k = 0; k < 3; k++) 
            {
                if (matrix[i][k] < matrix[i][j]) 
                {
                    isSmallestInRow = 0;
                    break;
                }
            }

            if (isSmallestInRow) 
            {
                for (k = 0; k < 3; k++) 
                {
                    if (matrix[k][j] > matrix[i][j]) 
                    {
                        isLargestInColumn = 0;
                        break;
                    }
                }
            }

            if (isSmallestInRow && isLargestInColumn) 
            {
                saddlePoint = matrix[i][j];
                saddleRow = i;
                saddleCol = j;
                break;
            }
        }
        if (saddlePoint != -1)
            break;
    }

    if (saddlePoint == -1) 
    {
        printf("No saddle point found\n");
    } 
    else 
    {
        printf("Saddle Point at [%d, %d]: %d\n", saddleRow, saddleCol, saddlePoint);
    }

    return 0;
}
