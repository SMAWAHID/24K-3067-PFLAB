#include <stdio.h>

int main(){
	int P, R, T;
	
	printf("Enter Principle value (between 100  to 1,000,000): \n");
	scanf("%d", &P);
	
	printf("Enter Rate of Intrest value (between 5 to 10): \n");
	scanf("%d", &R);
	
	printf("Enter Time Period value (between 1 to 10 years): \n");
	scanf("%d", &T);
	
	printf("Simple Intrest is %d", (P*R*T)/100 );
		
return 0;		
	
}