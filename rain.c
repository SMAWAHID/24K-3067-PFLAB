#include <stdio.h>

int main(){
	int a;
	
	printf("Enter 1 for YES and 0 for NO");
	scanf("%d", &a);
	
	if (a==1){
	
	printf("It is raining");}
	else if (a==2)
	{printf("It is not raining");
		}
	else 
	{ printf("Invalid Input");
	}
	
	return 0;
	
}
