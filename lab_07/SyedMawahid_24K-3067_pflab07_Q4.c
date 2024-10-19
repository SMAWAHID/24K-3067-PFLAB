#include <stdio.h>

int main() {
	int i, input;
	int found = 0;

	printf("Enter how many inputs you need: ");
	scanf("%d", &input);
	
	int num[input];
	
	for (i = 0; i < input; i++){
		printf("Element %d: ", i + 1);
		scanf("%d", &num[i]);
	}
	
	int max = num[0];
	
	for (i = 1; i < input; i++){
		if (num[i] > max) {
			max = num[i];
		}
	}
	
	int countarr[max + 1];
	
	for (i = 0; i <= max; i++){
		countarr[i] = 0;
	} 
	
	for (i = 0; i < input; i++){
		countarr[num[i]] += 1;  
	}
	
	printf("Numbers occurring more than once are: ");
	for (i = 0; i <= max; i++){
		if (countarr[i] > 1){
			printf("\n%d ", i);
			found = 1;
		}
	}
	
	if (found==0){
		printf("None.");
	}
	
	return 0;
}
