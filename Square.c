#include <stdio.h>
#include <stdlib.h>

int calculateSquare(int num) {
	return num*num;

}
int main() {
	int num;
	
	printf("Enter your number: ");
	scanf("%d", &num);
	
	printf("The square of %d is %d", num, calculateSquare(num));
	
	return 0;
}
