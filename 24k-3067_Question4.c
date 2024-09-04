#include <stdio.h>

int main(){
	
	int length;
	int width;
	
	printf("Enter Length: ");
	scanf("%i", &length);
	
	printf("Enter Width: ");
	scanf("%i", &width);
	
	printf("Area of Rectangle is %d \n", length * width);
	
	printf("Perimeter of Rectangle is %d", (2*length) + (2*width) );
return 0;		
	
}