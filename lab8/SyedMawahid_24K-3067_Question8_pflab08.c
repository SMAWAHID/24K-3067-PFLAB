#include <stdio.h>

int main()
{
	int mat1[3][3];
	int mat2[3][3];
	int sum1 = 0, sum2 = 0;
	
	printf("Enter Elements of Matrix 1:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Matrix 1 [%d][%d]: ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	
	printf("\nEnter Elements of Matrix 2:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Matrix 2 [%d][%d]: ", i, j);
			scanf("%d", &mat2[i][j]);
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum1 += mat1[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum2 += mat2[i][j];
		}
	}
	
	printf("Sum of Matrix 1: %d\n", sum1);
	printf("Sum of Matrix 2: %d\n", sum2);
	
	return 0;
}
