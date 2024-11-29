#include <stdio.h>

void bubbleSortRecursive(int arr[], int len, int n)
{
	if (len == 1)
	{
		return;
	}
	
	if (n < len - 1)
	{
		if (arr[n] > arr[n + 1])
		{
		    int temp = arr[n];
		    arr[n] = arr[n + 1];
		    arr[n + 1] = temp;
		}
		
		bubbleSortRecursive(arr, len, n + 1);
	}
	else
	{
		bubbleSortRecursive(arr, len - 1, 0);
	}
}
	

void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
	    printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int len;
	printf("Enter the number of elements in the array: ");
	scanf("%d", &len);
	
	int arr[len];
	printf("Enter the elements of the array:\n");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	bubbleSortRecursive(arr, len, 0);
	printf("Sorted array: ");
	printArray(arr, len);
	
	return 0;
}
