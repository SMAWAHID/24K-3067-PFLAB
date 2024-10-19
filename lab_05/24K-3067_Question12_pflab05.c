#include <stdio.h>

int main() {
    int speed, limit;

    printf("Enter speed limit (mph): ");
    scanf("%d", &limit);
    
    printf("Enter car speed (mph): ");
    scanf("%d", &speed);

    if (speed >= limit + 10) {
        printf("Driver is Speeding!!\n");
    } else {
        printf("Driver is not Speeding.\n");
    }

    if (speed % 5 == 0) {
        printf("Driver's speed is a multiple of 5.\n");
    } else {
        printf("Driver's speed is not a multiple of 5.\n");
    }

    return 0;
}
