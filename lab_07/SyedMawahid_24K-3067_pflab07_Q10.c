#include <stdio.h>


int main() {
	char str[100];
	int i, j, size, isPalindrome = 0;
	
	printf("Enter a string to check if it's a palindrome: ");
	scanf("%s", str);
	
	size = sizeof(str)/sizeof(str[0]);
	
    for (i = 0, j = size - 1; i < j; i++, j--){
		if (str[i] == str[j]) {
			isPalindrome = 1;
			break;
        }
    }

    // Output the result
    if (isPalindrome == 0){
        printf("The string is not a palindrome.\n");
    } 
	else {
		printf("The string is a palindrome.\n");
    }

    return 0;
}
