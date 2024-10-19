#include <stdio.h>

int main() {
    int num, i, sum = 0, rem, checknum, originalnum;
    
    printf("Enter the number to check if it is an Armstrong number: ");
    scanf("%d", &num);
    
    originalnum = num; 
    
    while(num > 0) {
        rem = num % 10; 
        sum += rem * rem * rem; 
        num = num / 10; 
    }
    
    if (sum == originalnum) {
        printf("%d is an Armstrong number\n", originalnum);
    } else {
        printf("%d is not an Armstrong number\n", originalnum);
    }

    return 0;
}

