#include <stdio.h>
#include <string.h>

void toUpperCase(char str[], char upperCase[])
{
	int len = strlen(str);  
	int i, j;
	
	for (int i = 0; i < len; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z' )
		{
			upperCase[i] = str[i] - 32;
		}
		else
		{
			upperCase[i] = str[i];  
		}
	}
	
	upperCase[len] = '\0';  
}

int main()
{
	char str[100], upperCase[100];
	
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	
	toUpperCase(str, upperCase);
	
	printf("Uppercase string: %s\n", upperCase);

    return 0;
}
