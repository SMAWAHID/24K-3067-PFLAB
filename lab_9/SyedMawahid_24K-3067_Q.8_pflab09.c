#include <stdio.h>
#include <string.h>

void starString(char str[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u' ||
				str[i][j] == 'A' || str[i][j] == 'E' || str[i][j] == 'I' || str[i][j] == 'O' || str[i][j] == 'U')
			{
				str[i][j] = '*';
			}
		}
	}
	
	printf("Updated Array:\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%c ", str[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	char str[3][3] = { {'p', 'a', 'c'}, {'d', 'L', 'I'}, {'E', 'm', 'o'} };
	
	starString(str);
	
	return 0;
}
