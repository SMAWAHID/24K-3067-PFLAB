#include <stdio.h>

int main(){
	
	int Age;
	int totalCost = 0;	
	
	printf("Enter the Age: ");
	scanf("%d",&Age);
	
	if(Age >= 0){		
		if(Age >= 0 && Age < 13){
			printf("Child: ");
			totalCost += 5;
		}
		else if(Age >= 13 && Age <18){
			printf("Teen: ");
			totalCost += 10;
		}
		else if(Age >= 18 && Age < 65){
			printf("Adult: ");
			totalCost += 20;		
		}
		else if(Age >= 65){
			printf("Senior: ");
			totalCost += 15;
		}
		
		printf("Total Cost is $%d", totalCost);		
	}
	else{
		printf("Invalid Age");
	}
		
	return 0;
}