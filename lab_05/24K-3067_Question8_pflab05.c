#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter first Number: ");
	scanf("%d",&num1);
	
	printf("Enter second Number: ");
	scanf(" %d",&num1);

	(num1 > num2)? printf("%d is the maximum number", num1) : printf("%d is the meximum number", num2);	

	return 0;	
}