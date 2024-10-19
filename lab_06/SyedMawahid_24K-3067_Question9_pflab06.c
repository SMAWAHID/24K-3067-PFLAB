#include <stdio.h>

int main(){
	int sales, total=0;
	
	for (int i = 1; i<=7; i++){
		
		printf("Enter sales figures for day %d: ", i);
		scanf("%d", &sales);
		
		total += sales;
	}
	
	printf("\nTotal Sales over the week = %d", total);
	
	return 0;
}
