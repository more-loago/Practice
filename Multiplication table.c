#include <stdio.h>
#include <stdlib.h>

int main() {
	
printf("Multiplication table \n\n");

	int num, product;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	/*int count = 12;
	
	while (count <= 12 && count > 0) {
		int product = num * count;
		printf("%dx%d = %d\n", num, count, product);
		count = count - 1;
	}*/
	
	int count = 1;
	
	while (count <= 12) {
		product = num*count;
		printf("%dx%d = %d\n", num, count, product);
		count = count + 1;
	}
	return 0;
}
