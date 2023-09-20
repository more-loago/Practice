#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float a, b, c, d, e, sum, avg;
	
printf("Finding the sum and average of floats\n");
	
	printf("Enter five numbers \n");
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
	
	sum = a+b+c+d+e;
	avg = (a+b+c+d+e)/5;
	
	printf("The sum of the numbers is %.f\n", sum);
	printf("The average is %.f\n", avg);
	
	return 0;
}
