/* Create a program that determines if a number is positive, negative, or zero, and if it’s positive,
checks if it’s an even or odd number.
*/

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num>0){
    	printf("Number is Positive ");
	    if (num%2 == 0) {
	        printf("and Even");
	    }
	    else {
	        printf("and Odd");
	    }
	}
	else if (num == 0){
		printf("Number is 0");
	}
	else{
		printf("Number is Negative");
	}
	
    return 0;
}