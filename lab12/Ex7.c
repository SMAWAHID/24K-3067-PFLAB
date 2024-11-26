#include <stdio.h>
void printValue(void *ptr, char type) {
    switch (type) {
        case 'i': 
            printf("Integer: %d\n", *(int*)ptr); 
            break;
        case 'f': 
            printf("Float: %.2f\n", *(float*)ptr); 
            break;
        case 'c': 
            printf("Character: %c\n", *(char*)ptr); 
            break;
        default: 
            printf("Unknown type\n");
}
}
int main() {
    int a = 42;
    float b = 3.14;
    char c = 'A';
    double d = 3.13213;
    printValue(&a, 'i');
    printValue(&b, 'f');
    printValue(&c, 'c');
    
    return 0;
}