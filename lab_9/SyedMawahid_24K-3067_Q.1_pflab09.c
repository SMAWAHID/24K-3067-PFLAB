#include <stdio.h>
#include <string.h>

int main()
{
	char source[20];
	char destination[20];
	int n;
	
	printf("Enter a number for concatenation: ");
	scanf("%d", &n);
	
	printf("Enter source string: ");
	scanf("%s", &source);
	
	printf("Enter destination string: ");
	scanf("%s", &destination);
		
	strncat(destination, source, n);
	
	printf("Concatenated String is: %s", destination);
	
	return 0;
}


