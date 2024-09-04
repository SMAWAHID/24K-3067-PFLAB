#include <stdio.h>

int main(){
	int item1, item2, item3, TotalCost;
	
	printf("Enter cost of first item: $");
	scanf("%d", &item1);
	
	printf("Enter cost of second item: $");
	scanf("%d", &item2);
	
	printf("Enter cost of third item: $");
	scanf("%d", &item3);
	
	TotalCost = item1 + item2 + item3;
	printf("Total cost = $%d", TotalCost);
		
return 0;		
	
}