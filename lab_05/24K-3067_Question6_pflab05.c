#include <stdio.h>

int main(){
	int money;
	
	printf("Enter money you need to withdraw: ");
	scanf("%d",&money);
	
	if(money > 0 && money <= 500){
		if(money % 20 == 0){
			printf("Withdrawal approved");
		}
		else{
			printf("Withdrawal denied");
		}
	}
	else{
		printf("Withdrawal denied");
	}
	
	return 0;	
}