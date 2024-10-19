/*
Design a traffic light system. Ask the user to enter a color (Red, Yellow, Green) and use nested if-
else statements to display the corresponding action:

• Red: Stop
• Yellow: Caution
• Green: Go 
*/

#include <stdio.h>

int main(){
	char color;
	
	printf("Enter a color (R for Red, Y for Yellow, G for Green): ");
	scanf("%c" , &color);
	
	if (color == 'R' || color == 'Y' || color == 'G'){
		if (color == 'R'){
			printf("Stop!!!");
		}
		else if(color == 'Y'){
			printf("Caution!!");
		}
		else{
			printf("Go!");
		}
	}
	
	return 0;	
}
	
