#include <stdio.h>
#include <stdlib.h>


/*int factorialC(int factorial) {
	
	int num, i;
	unsigned long long factorial = 1;
	
	for (i = 1; i <= num; ++i) {
		factorial *= i;
	}	
	return 0;
}

int main() {
	
	int num; 
	
	if (num < 0) {
		do {
			printf("Only positive integers accepted\n");
			printf("Enter a positive integer \n");
			scanf("%d", &num);
		} while (num < 0);
	}	

	printf("Factorial = %d", factorialC(factorial));
	
}*/

unsigned long long factorial(int n) {
	
	if (n == 0) {
		
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	
	int n;
	
	printf("Enter your positive number: ");
	scanf("%llu", &n);
	
	if (n < 0) {
		do {
			printf("Only positive integers accepted\n");
			printf("Enter a positive integer \n");
			scanf("%d", &n);
		} while (n < 0);
	}	
	
	printf("Factorial = %d", factorial(n));
}
