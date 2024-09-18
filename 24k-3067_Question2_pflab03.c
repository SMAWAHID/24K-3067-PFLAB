#include <stdio.h>

int main(){
	int num1, num2, temp;
	
	printf("Enter 1st number: \n");
	scanf("%d", &num1);
	
	printf("Enter 2nd number: \n");
	scanf("%d", &num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("The first number swapped to second number as %d \n", num1);
	printf("The second number swapped to first number  as %d \n", num2);
	
	
return 0;		
	
}
