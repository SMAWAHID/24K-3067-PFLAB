/* 3. Write a program that not only assigns a letter grade based on a score (0-100) but also gives
feedback based on the grade. Use nested if else.
• A: "Outstanding!"
• B: "Well done!"
• C: "You passed."
• D: "You need to improve."
• F: "Better luck next time."      
*/

#include <stdio.h>

int main(){
	int score;
	char grade=0;
	
	printf("Enter your score: ");
	scanf("%d" , &score);
	
	if (score >= 0 && score <= 100){
		if (score>=90){
			grade = 'A';
			printf("A: ");
			if (grade == 'A'){
				printf("\"Outstanding!!\"");
			}
		}
		else if(score>=80 && score <90){
				grade = 'B';
				printf("B: ");
				if (grade == 'B'){
					printf("\"Well done!\"");
			}
		}
		else if(score>=65 && score <80){
				grade = 'C';
				printf("C: ");
				if (grade == 'C'){
					printf("\"You passed.\"");
			}
		}
		else if(score>=50 && score <65){
				grade = 'D';
				printf("D: ");
				if (grade == 'D'){
					printf("\"You need to improve.\"");
			}
		}
		else {
			grade = 'F';
			printf("F: ");
			if (grade == 'F'){
				printf("\"Better luck next time.\"");
			}
		}
	}
	else{
		printf("Invalid score");
	}
	
	return 0;	
}
	
