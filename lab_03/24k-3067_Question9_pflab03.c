#include <stdio.h>

int main(){

	int TaxRate;
	int salary;
	int tax;

	
	printf("Enter the Tax Rate (as percentage): ");
	scanf("%d", &TaxRate);

	printf("Enter your salary: $");
	scanf("%d", &salary);

	
	tax = (TaxRate*salary)/100;
	printf("Tax = $%d\n", tax);
	
	salary -= tax;
	printf("Salary after tax = $%d\n", salary);

return 0;
}
