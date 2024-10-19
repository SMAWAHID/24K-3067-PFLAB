#include <stdio.h>

int main(){
	int people, factorial = 1, i;
	
	printf("Enter the number of participants attending the workshop: ");
	scanf("%d", &people);
	
	for(i = people; i > 0; i--){
		factorial = factorial * i;
	}
	printf("There are %d ways", factorial);
	
	return 0;
}


