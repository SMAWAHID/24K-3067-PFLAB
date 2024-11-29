#include <stdio.h>
#include <string.h>

int main()
{
	char destination[5][20];
	char source[20];
	int i, j, length;
	
	printf("Enter 5 words to check if they are palindromes:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%19s", destination[i]);
	}
	
	printf("\nPalindromes found:\n");
	for (i = 0; i < 5; i++)
	{
		length = strlen(destination[i]);
		
		for (j = 0; j < length; j++)
		{
		    source[j] = destination[i][length-j-1];
		}
		source[length] = '\0';
		
		if (strcmp(source, destination[i]) == 0)
		{
		    printf("%s\n", destination[i]);
		}
	}
	
	return 0;
}

