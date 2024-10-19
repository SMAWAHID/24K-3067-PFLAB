#include <stdio.h>

int main(){
	int num, sum = 0;
	
	do{
		printf("Enter a number\n(Press 0 to EXIT): ");
		scanf("%d", &num);
		sum += num;
		
		printf("Sum is %d\n", sum);
		            
	}while(num !=0);
	
	return 0;
}

/* do-while loop is better for this type of problem since it runs atleast one time whether condition is true or false*/