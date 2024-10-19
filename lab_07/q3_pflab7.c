#include <stdio.h>

int main() {
    int i; int min, max;
    int input;
	
    printf("Enter how many inputs you need: ");
    scanf("%d", &input);
	
    int num[input];
	
    printf("Enter numbers to check for Maximum and Minimum values: \n");
    
    for(i = 0; i < input; i++){
    	scanf("%d", &num[i]);
    }
	
     min = max = num[0];
	
    for (i = 1; i < input; i++){
        if (num[i] < min){
            min = num[i];
        }
        if (num[i] > max){
            max = num[i];
        }
    }
    
    printf("Maximum Number = %d\n", max);
    printf("Minimum Number = %d", min);    
	
    return 0;
}

