#include <stdio.h>

int isPrime(int n)
{
	int i;
	if (n <= 1)
	{
	   return 0;
	} 
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
		   return 0;
		}
	}
	return 1; 
}

int main()
{
	int number;
	
	while (1)
	{
		printf("Enter number to check if it's prime (to quit enter -1): ");
		scanf("%d", &number);
		
		if (number == -1)
		{
		    break; 
		}
		
		if (isPrime(number))
		{
		    printf("%d is a prime number.\n", number);
		} 
		else
		{
		    printf("%d is not a prime number.\n", number);
		}
	}
	
	return 0;
}

