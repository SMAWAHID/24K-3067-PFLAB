#include <stdio.h>

int main() {
	int i, found = 0;
	int num[10];
	
	for (i = 0; i <=9 ; i++){
		printf("Number %d: ", i+1 );
		scanf("%d", &num[i]);
	}
	
	int target;
	printf("Enter the Number you want to find: ");
	scanf("%d", &target);
	
	for (i=0 ; i<10; i++){
		if(num[i]==target){
			printf("Number Found at index %d\n",i);
			found =1;
			break;
		}
	}
	
	if(found == 0){
		printf("-1");
	} 
	
	return 0;
}