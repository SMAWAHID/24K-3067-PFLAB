#include <stdio.h>

int main() {
    int num, rem;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    printf("Reversed number is: ");
    
    while(num > 0) 
	{
        rem = num % 10; 
        num = num/10;
        printf("%d",rem); 
    }

    return 0;
}

