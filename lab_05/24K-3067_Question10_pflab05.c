#include <stdio.h>

int main(){
	
	int num;	
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	(num > 0)? printf("Positive Number") : (num<0)? printf("Negative Number") : printf("Number is Zero");
			
	return 0;
}