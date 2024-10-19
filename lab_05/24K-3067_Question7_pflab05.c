#include <stdio.h>

int main(){
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	if(num % 3 == 0){
		if(num % 5 == 0){
			printf("%d is a multiple of 3 and 5", num);
		}
		else{
			printf("%d is a multiple of 3 only", num);
		}
	}
	else if(num % 5 == 0){
			printf("%d is a multiple of 5 only", num);
	}
	else{
		printf("%d is not a multiple of 3 and 5", num);
	}
	
	return 0;	
}