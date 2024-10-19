#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0;

    printf("Enter a string (max 99 characters): ");
    scanf("%[^\n]", str);
    
    int size = sizeof(str)/sizeof(str[0]);

    for (int i = 0; i < size ; i++) {

        if (str[i] == ' '|| str[i] == '\t' || str[i] == '\n') {
            spaces++;  
        } 
        else {
            continue;  
        }
    }

    printf("Number of spaces: %d\n", spaces);

    return 0;
}
