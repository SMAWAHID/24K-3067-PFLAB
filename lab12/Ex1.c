#include <stdio.h>
	
int main() {
	int a = 10;
	int *p;
	p = &a;
	printf("Value of a: %d\n", a);
	printf("Address of a: %d\n", &a);
	printf("Value of p (Address stored in pointer):%d\n", p);
	printf("Value pointed to by p: %d\n", *p);
	
	return 0;
}