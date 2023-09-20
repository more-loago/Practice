#include <stdio.h>
#include <stdlib.h>

int main() {
	
printf("Swapping integer values \n");

	float a, b, c;
	
	printf("Enter the first integer value: \n");
	scanf("%f", &a);
	
	printf("Enter the second integer value: \n");
	scanf("%f", &b);
	
	printf("Before switching, a = %.f and b = %.f \n", a, b);
	
	c = a;
	a = b;
	b = c;
	
	printf("After switching, a = %.f and b = %.f", a, b);
	
	return 0;
}
