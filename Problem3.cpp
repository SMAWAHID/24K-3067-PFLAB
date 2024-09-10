//An online shopping store is providing discounts on the items due to Eid. 
//If the cost of items is less than 2000 it will give a discount of up to 5%. 
//If the cost of shopping is 2000 to 4000, a 10% discount than 6000 then a 35% discount will be applied to the cost of shopping. 
//Print the actual amount, saved amount and the amount after discount. The Minimum amount eligible for a discount is 500.

#include <stdio.h>

int main(){
	int  actualAmount, savedAmount;
	float discountAmount;
	printf("Enter Cost of items ");
	scanf("%d", &actualAmount);
	
	if (actualAmount < 2000){
		discountAmount = (actualAmount * 95)/100;  //actual is 100% so after discount -5% hence 95%
		savedAmount = actualAmount - discountAmount;
		
	}
	else if (actualAmount >= 2000 && actualAmount < 4000) {
		discountAmount = (actualAmount * 90)/100;  //actual is 100% so after discount -10% hence 90%
		savedAmount = actualAmount - discountAmount;
		
	}
	else if (actualAmount >= 4000 && actualAmount < 6000) {
		discountAmount = (actualAmount * 80)/100;  //actual is 100% so after discount -35% hence 65%
		savedAmount = actualAmount - discountAmount;
	}
	else if (actualAmount >= 6000) {
		discountAmount = (actualAmount * 65)/100;  //actual is 100% so after discount -35% hence 65%
		savedAmount = actualAmount - discountAmount;
	}
	else if (actualAmount<500){
		discountAmount = actualAmount ;  
		savedAmount = actualAmount - discountAmount;
		printf("No discount applied");
		
	}
	
	printf("The actual amount is: %d\n", actualAmount);
	printf("The discounted amount is: %.2f\n", discountAmount);
	printf("The saved amount is: %d\n", savedAmount);
		
	return 0;
}
