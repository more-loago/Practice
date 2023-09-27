#include <stdio.h>
#include <stdlib.h>


int main() {
	
printf("Finding the factorial \n\n");

	int num, i;
	unsigned long long factorial = 1;
	
	printf("Enter a positive integer: \n");
	scanf("%d", &num);
	
	if (num < 0) {
		do {
			printf("Only positive integers accepted\n");
			printf("Enter a positive integer \n");
			scanf("%d", &num);
		} while (num < 0);
	}
	
	for (i = 1; i <= num; ++i) {
		factorial *= i;
	}
	printf("Factorial = %llu", factorial);
	
	return 0;
}
