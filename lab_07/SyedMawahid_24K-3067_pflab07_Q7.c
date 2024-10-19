#include <stdio.h>

int main(){
	 int numarr[5], i;
	 int copyarr[5];
	 
	 for (i = 0; i <=4 ; i++){
		printf("Number %d: ", i+1 );
		scanf("%d", &numarr[i]);
	}
	
	for (i =0 ; i <= 4; i++){
		copyarr[i]= numarr[i];
		
	}
	
	printf("Copied array is: ");
	for (i =0 ; i <= 4; i++){
		printf("%d ", copyarr[i]);;	
	}
	
	printf("\nOriginal array is: ");
	for (i =0 ; i <= 4; i++){
		printf("%d ", numarr[i]);;	
	}

	return 0;
}
