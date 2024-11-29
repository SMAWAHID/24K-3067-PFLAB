#include <stdio.h>

int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int result[3][3] = {0};
	int i, j, n;
	int row = 3, col = 3;
	
	printf("Enter Elements of Matrix 1:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{	
			printf("Matrix [%d,%d]: ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("\nEnter Elements of Matrix 2:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{	
			printf("Matrix [%d,%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
		
	for(i=0; i<row; i++)
	{
		for (j = 0; j < col; j++)
		{
			result[i][j] = 0;
			for (n = 0; n < col; n++)
			{
				result[i][j] += mat1[i][n] * mat2[n][j];
			}
		}
	}
	
	printf("Resulting Matrix after Multiplication:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
