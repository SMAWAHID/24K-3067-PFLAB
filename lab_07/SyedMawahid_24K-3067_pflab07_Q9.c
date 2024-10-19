#include <stdio.h>

int main() {
	char str[100];
	
	printf("Enter a string (max 99 characters): ");
	scanf("%[^0-9]", str);
	
    printf("String without numeric characters: %s\n", str);
    
	return 0;
}
