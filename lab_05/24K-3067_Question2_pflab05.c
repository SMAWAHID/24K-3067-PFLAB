/* Write a program that asks for a movie rating (1 to 5) for movie “The Lion King” from user and
provides feedback based on the rating:
• 5: Excellent
• 4: Good
• 3: Average
• 2: Poor
• 1: Terrible
*/

#include <stdio.h>

int main(){
	int rating;
	
	printf("Rate \"The Lion King\" movie form 1 to 5: ");
	scanf("%d" , &rating);
	
	if (rating>=1 && rating<=5){
		switch(rating){
			case 1:
				printf("Terrible");
				break;
			case 2:
				printf("Poor");
				break;
			case 3:
				printf("Average");
				break;
			case 4:
				printf("Good");
				break;
			default:
				printf("Excellent");
				break;
		}
	}
	else{
		printf("Invalid rating");
	}
	
	return 0;	
}
	
