#include <stdio.h>

int main() 
{
	int arr[] = {20, 32, 55, 20, 25, 32, 25, 20};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i, j;
	int isPrinted[100] = {0};
	int first = 1;
	
	printf("Elements occurring more than once: ");
	for (i = 0; i < size; i++) 
	{
		for (j = i + 1; j < size; j++) 
		{
			if (arr[i] == arr[j] && !isPrinted[arr[i]]) 
			{
				if (first == 0)
				{
					printf(", ");
				}
				
				printf("%d", arr[i]);
				isPrinted[arr[i]] = 1;
				first = 0;
				break;
			}
		}
	}
	printf("\n");
	
	return 0;
}
