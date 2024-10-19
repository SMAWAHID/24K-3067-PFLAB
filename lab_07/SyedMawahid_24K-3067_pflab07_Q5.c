#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string (max 99 characters): ");
    scanf("%[^\n]", str);
    
    int size = sizeof(str)/sizeof(str[0]);

    for (int i = 0; i < size ; i++) {
        char ch = str[i];

        if (ch == ' ') {
            continue;  
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++; 
            } else {
                consonants++;  
            }
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
