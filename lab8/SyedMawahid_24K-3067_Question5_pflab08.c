#include <stdio.h>

int main()
{
	int i, j;
	int rows;
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	int half = (rows / 2) + 1;
	
	for (i = 1; i <= half; i++)
	{    
		for (j = 1; j <= (half - i); j++)
		{
			printf(" ");
		}
		
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	for (i = half - 1; i >= 1; i--)
	{    
		for (j = 1; j <= (half - i); j++)
		{
			printf(" ");
		}
		
		for (j = 1; j <= i; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}
