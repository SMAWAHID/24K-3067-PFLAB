#include <stdio.h>

int main()
{	
	int input, i, j, Prime;
	int count = 0;
	
	printf("Enter a number to get prime numbers in the range: ");
	scanf("%d", &input);
		
	printf("Prime numbers up to %d are: ", input);
	
	for (i = 2; i <= input; i++)
	{
	    Prime = 1;
		
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0) 
			{
				Prime = 0;
				break;
			}
		}
		
		if (Prime == 1)
		{
			printf("%d,", i);
			count++;
		}
	}
	
	if (count > 0)
	{
	    printf("\b ");
	}
	
	printf("\n");
	
	return 0;
}
