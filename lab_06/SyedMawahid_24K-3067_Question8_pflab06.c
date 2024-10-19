#include <stdio.h>

int main(){
	int amount, total=0, cents_25 = 0, cents_10 = 0, cents_5=0, cents_1 = 0;
	
	printf("Enter amount: ");
	scanf("%d", &amount);
	
	total = amount;
	
	while(amount>0){
		if (amount >=25){
			cents_25 = amount/25;
			amount -= cents_25 * 25;
		}
		if (amount>=10){
			cents_10 = amount/10;
			amount -= cents_10 * 10;
		}
		if (amount>=5){
			cents_5 = amount/5;
			amount -= cents_5 * 5;
		}
		else{
			cents_1 = amount;
			amount -= cents_1;
		}
	}
	printf("25 cents used %d time(s)\n", cents_25);
	printf("10 cents used %d time(s)\n", cents_10);
	printf("5 cents used %d time(s)\n", cents_5);
	printf("1 cent used %d time(s)\n", cents_1);
	printf("Total Amount = %d", total);
	
	return 0;
}