#include <stdio.h>

int main(){
	int balance = 50000, amount;
	
	while (balance > 0)
	{
		printf("Enter the amount you need to Withdraw: ");
		scanf("%d", &amount);
		
		if (amount <= balance)
		{
			balance -= amount;
			printf("Transaction succesfull!\n");
			printf("Remaining Balance is %d.\n", balance);
		}
		else{
			printf("Insufficient Balance!\n");
			break;
		}
}
	return 0;
}


