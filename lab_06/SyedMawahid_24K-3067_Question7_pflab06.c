#include <stdio.h>

int main(){
    float num1, num2, sum, diff, division, product;
    char input, operators;
	
    do {
        printf("\nEnter operator (+, -, *, /): ");
        scanf(" %c", &operators);
		
        printf("\nEnter 1st Number: ");
        scanf(" %f", &num1);
		
        printf("\nEnter 2nd Number: ");
        scanf(" %f", &num2);
		
        switch (operators) {
            case '+':
                sum = num1 + num2;
                printf("\n%.2f + %.2f = %.2f\n", num1, num2, sum);
                break;
				
            case '-':
                diff = num1 - num2;
                printf("\n%.2f - %.2f = %.2f\n", num1, num2, diff);
                break;
				
            case '/':
                if (num2 != 0) {
                    division = num1 / num2;
                    printf("\n%.2f / %.2f = %.2f\n", num1, num2, division);
                } else {
                    printf("\nError: Division by zero is not allowed.\n");
                }
                break;
				
            case '*':
                product = num1 * num2;
                printf("\n%.2f * %.2f = %.2f\n", num1, num2, product);
                break;
				
            default:
                printf("\nInvalid Operator");
                break;
        }
				
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &input);
	
    } while (input != 'n');
	
    return 0;
}
