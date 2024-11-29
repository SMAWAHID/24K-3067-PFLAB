#include <stdio.h>

int linearSearch(int arr[], int target, int size, int index)
{
	if (index >= size)
	{
		return -1;
	}
	if (arr[index] == target)
	{
		return index;
	}
	return linearSearch(arr, target, size, index + 1);
}

int main()
{
	int arr[] = {1, 4, 5, 7, 8, 85};
	int target;
	
	printf("Enter the target to search: ");
	scanf("%d", &target);
	
	int len = sizeof(arr) / sizeof(arr[0]);
	int index = 0;
	
	int result = linearSearch(arr, target, len, index);
	
	if (result != -1)
	{
		printf("Target %d found at index %d\n", target, result);
	}
	else
	{
		printf("Target %d not found\n", target);
	}
	
	return 0;
}
