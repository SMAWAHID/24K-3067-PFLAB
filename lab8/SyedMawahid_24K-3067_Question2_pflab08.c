#include <stdio.h>

int main() {
	int i, j;
	int input;
	
	printf("Enter a number to print pattern for odd numbers: ");
	scanf("%d", &input);
	
	if (input == 0)
	{	
		printf("0\n");
	}
	
	else if (input > 0)
	{	
	    for (i = input; i >= 0; i--)
		{	
			for (j = 0; j < input - i; j++)
			{	
				printf(" ");
			}
			
			if (i % 2 != 0)
			{	
			    printf("%d\n", i);
			}
		}
	}
	
	else
	{	
		for (i = input; i <= 0; i++)
		{	
			for (j = input; j < i; j++)
			{	
				printf(" ");
			}
			
			if (i % 2 != 0)
			{
				printf("%d\n", i);
			}
		}
	}
	
return 0;
}
