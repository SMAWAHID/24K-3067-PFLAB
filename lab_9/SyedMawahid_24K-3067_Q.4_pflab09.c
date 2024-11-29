#include <stdio.h>
#include <string.h>

void swapIntegers(int a, int b)
{
	a= a+b; 
	b = a-b; 
	a =a-b; 
	printf("a: %d\n", a);
	printf("b: %d", b);
}

int main()
{
	int a, b;
	
	printf("Enter value 1: ");
	scanf("%d", &a);
	printf("Enter value 2: ");
	scanf("%d", &b);
	
	swapIntegers(a, b);
	
	
	return 0;
}


