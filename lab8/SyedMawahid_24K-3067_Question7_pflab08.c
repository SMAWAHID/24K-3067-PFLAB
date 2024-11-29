#include <stdio.h>

int main()
{
	int mat[3][3];
	int result[3][3] = {0};
	int i, j, n;
	int row = 3, col = 3;
	
	printf("Enter Elements of Matrix:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{	
			printf("Matrix [%d,%d]: ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			result[j][i] = mat[i][j];
			
		}
	}
	
	printf("\nTransposed Matrix:\n");
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
