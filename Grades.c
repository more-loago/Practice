#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float grade;
	
printf("What is your performance?\n");
	
	printf("What is your percentage score?\n");
	scanf("%f", &grade);
	
	if(grade >= 85 && grade <= 100){
		printf("Distinction");
	} 
	else if(grade >= 60 && grade < 85){
		printf("I class");
	} 
	else if(grade >= 50 && grade < 60){
		printf("II class");
	} 
	else if(grade >= 35 && grade < 50){
		printf("III class");
	} 
	else if(grade >=0 && grade <35){
		printf("You have failed");
	} 
	else{
		printf("Invalid input");
	}
	return 0;
}
