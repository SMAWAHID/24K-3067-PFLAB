#include <stdio.h>

int main() {
	int arr[] = {10, 20, 30};
	int *p = arr;
	printf("Address of arr[0]: %d, Value:%d\n",p, *p);
	printf("Address of arr[1]: %d, Value:%d\n",(p + 1), *(p + 1));
	printf("Address of arr[2]: %d, Value: %d\n",(p + 2), *(p + 2));
	
 	return 0;
}