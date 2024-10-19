/*Write a program that categorizes a person's age into different life stages: Child, Teenager, Adult,
and Senior, using nested if-else statements. 
*/

#include <stdio.h>

int main(){
	
	int Age;
		
	printf("Enter the Age: ");
	scanf("%d", &Age);
	
	if(Age >= 0){
		if(Age <= 12){
			printf("Child");
		}
		else if(Age <= 19){
			printf("Teenager");
		}
		else if(Age <= 64){
			printf("Adult");
		}
		else{ 
			printf("Senior");
		}
	}
	else{
		printf("Invalid Age");
	}

	return 0;
}
