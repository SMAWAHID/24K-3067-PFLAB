#include <stdio.h>
#include <string.h>

int main()
{
	char source[5][10] = {"Fast", "fast", "Usman", "mawahid", "annas"};
	char destination[20];
	int n;
	
	printf("Enter a word to find in string: ");
	scanf("%s", &destination);
	
	if(strcmp(destination, source) == 0)
	{
		printf("Found");
	}
	else
	{
		printf("Not Found");
	}
	
	return 0;
}


