#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int year;
	
printf("Determining whether a given year is a leap year or not\n");
	
	printf("Enter your year of choice:\n");
	scanf("%d", &year);
	
	if(year % 4 == 0){
		printf("It is a leap year");
		
	} else {
		printf("It is not a leap year");
	}
	
}
