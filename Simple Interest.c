#include <stdio.h>
#include <stdlib.h>

int main() {
	
printf("Calculating Simple Interest \n\n");

	float principal, rate, time, simpleInterest;
	
	printf("What is the principal amount? \n");
	scanf("%f", &principal);
	
	printf("What is the time period? \n");
	scanf("%f", &time);
	
	printf("What is the interest rate? \n");
	scanf("%f", &rate);
	
	simpleInterest = principal*(1+(time * (rate/100)));
	
	printf("The simple interest after %.f years is P%.2f", time, simpleInterest);
	
	return 0;
}
