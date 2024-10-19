#include <stdio.h>

int main() {
    double principal, rate, Amount;
    int time, year = 1;
    
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the interest rate (in %%): ");
    scanf("%lf", &rate);
    
    printf("Enter the time period (in years): ");
    scanf("%d", &time);
    
    do 
	{
        Amount = principal * (1 + (rate / 100) * year);
        
        printf("Year %d: Accumulated Amount = %.2lf\n", year, Amount);
        year++;
    }while (year <= time);

    return 0;
}
