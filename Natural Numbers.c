#include <stdio.h>
#include <stdlib.h>


int main() {
	
printf("Generating the first n natural numbers \n\n");

	int n, i;
	
	printf("Enter a positive value for n:\n");
	scanf("%d", &n);
	
	if (n < 0) {
		do {
			printf("Only positive values are accepted\n");
			printf("Enter a positive number: \n");
			scanf("%d", &n);
		}
		while (n < 0);
	}
	
	for (i = 1; i <= n ; i++) {
		printf("%d\n", i);
	}
	
	return 0;
}
