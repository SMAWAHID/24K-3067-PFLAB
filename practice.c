#include <stdio.h>

int main() {
    int age, qty;
    int totalCost = 0, discountedAmount = 0;
    char seat_type;
    
    // Get the user's age
    printf("Enter Age: ");
    scanf("%d", &age);
    
    // Clear the input buffer
    getchar();
    
    // Get the seat type
    printf("Select Your Seat Type:\n 1. Press R for Regular seat.\n 2. Press V for VIP seat.\n 3. Press P for Premium seat.\n:");
    scanf("%c", &seat_type);
    
    // Validate seat type
    if(seat_type != 'R' && seat_type != 'V' && seat_type != 'P') {
        printf("Invalid character entered!!\n");
        return 2;
    }
    

    printf("Enter how many tickets do you want?\n:");
    scanf("%d", &qty);    

    if(age >= 16 && age < 65) {
        switch(seat_type) {
            case 'R':
                totalCost = 800 * qty; 
                break;
            case 'V':
                totalCost = 1000 * qty;
                break;
            case 'P':
                totalCost = 1500 * qty;
                break;
            default:
                printf("Invalid character entered!!\n");
                return 1;
        }
    } else if(age >= 65) {
        switch(seat_type) {
            case 'R':
                totalCost = 700 * qty; 
                break;
            case 'V':
                totalCost = 900 * qty;
                break;
            case 'P':
                totalCost = 1300 * qty;
                break;
            default:
                printf("Invalid character entered!!\n");
                return 1;
        }
    } else {
        printf("Invalid Age\n");
        return 1;
    }
    
    if (totalCost > 3500) {
        discountedAmount = totalCost * 0.10; 
        totalCost -= discountedAmount;
    }
    
   
    printf("Total Cost is %d\n", totalCost);
    
    return 0;
}
