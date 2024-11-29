#include <stdio.h>
#include <string.h>

void reverseString(char str[], char reversed[])
{
	int len = strlen(str);  
	int i, j;
	
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		reversed[i] = str[j];  
	}
	
	reversed[len] = '\0';  
}

int main()
{
	char str[100], reversed[100];
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	
	reverseString(str, reversed);
	
	printf("Reversed string: %s\n", reversed);

    return 0;
}
