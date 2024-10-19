#include <stdio.h>

int main() {
    int i;
    int input;

    printf("Enter how many inputs you need: ");
    scanf("%d", &input);

    int num[input];
	
    
	for (i = 0; i < input; i++) {
        printf("Element %d: ", i + 1);
        scanf("\n%d", &num[i]);
    }
    
	int countarr[input];
	for (i = 0; i < input; i++) {
       countarr[i] = 0;
    }
    
    for (i = 0; i < input; i++) {
       countarr[num[i]] +=1;
    }
    
    printf("Numbers ocurring more than once: ");
    for (i = 0; i < 9; i++) {
       if(countarr[i] > 1){
       		printf("%d ", i);
	   }

    }
    
    
	
   

    return 0;
}

