#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
	{
		return a;
	}
    else{
		return gcd(b, a % b);
	}
}

int main()
{
	int num1, num2;
	printf("Enter Number 1: ");
	scanf("%d", &num1);
	printf("Enter Number 2: ");
	scanf("%d", &num2);
	printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
	return 0;
}
