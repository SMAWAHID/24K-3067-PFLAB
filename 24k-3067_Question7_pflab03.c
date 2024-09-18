#include <stdio.h>

int main(){
	float C;
	float F;
	
	printf("Enter the Temperature: ");
	scanf("%f", &C);
	F = ((C*9/5 + 32)) ;
	
	printf("Fahrenheit = %0.1f\n", F);
		
return 0;		
	
}
