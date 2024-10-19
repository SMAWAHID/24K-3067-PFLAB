#include <stdio.h>

int main() {
    int sum = 0; int input;
    int i = 0;
	
	printf("Enter how many inputs you need: ");
	scanf("%d", &input);
	
	int num[input]; 
    
	printf("Enter numbers to get a sum (press 0 to exit): \n");
    
    while (i < input) {
        scanf("%d", &num[i]);
        if (num[i] == 0) {
            break;
        }
        sum += num[i];
        i++;
    }

    printf("Sum is: %d\n", sum);

    return 0;
}

