#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    char ch;

    printf("Enter a string (max 99 characters). Entering a space or newline will end input:\n");

    while (1) {
        scanf("%c", &ch);

        if (ch == ' ' ) {
            printf("Space or newline detected. Exiting...\n");
            break;
        }
        if (ch == '\n'){
        	printf("Space or newline detected. Exiting...\n");
            break;
        }
		

        str[i] = ch;
        i++;
	}
    

    str[i] = '\0';
    printf("You entered: %s\n", str);

    return 0;
}
