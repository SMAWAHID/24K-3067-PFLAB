#include <stdio.h>

int main() {
    int i; 
    int input;
	
    printf("Enter how many inputs you need: ");
    scanf("%d", &input);
	
    int num[input];
	
    printf("Enter numbers to reverse them: \n");
    
    for(i = 0; i < input; i++){
    	scanf("%d", &num[i]);
    }
	
    printf("Reversed numbers: ");
    
    for(i = input - 1; i >= 0; i--){
        printf("%d ", num[i]);
    }

    return 0;
}

