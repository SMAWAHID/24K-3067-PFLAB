#include <stdio.h>
#include <string.h>

int Power(int base, int exp)
{
	if(exp==0)
	{
		return 1;
	}
	
	int result =1;
	
	for(int i=0; i<exp; i++)
	{
		result = result * base;
	}
	return result;
}


int main()
{
	int base, exp;
	
	printf("Enter the Base number: ");
	scanf("%d", &base);
	
	printf("Enter the exponential: ");
	scanf("%d", &exp);
	
	int result = Power(base, exp);
	
	printf("%d to the power of %d = %d", base, exp, result);
	
	return 0;
}
