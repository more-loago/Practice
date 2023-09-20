#include <stdio.h>
#include <stdlib.h>

int main() {
	
printf("Calculating the area and perimeter of a rectangle. \n");

	float length, width, area, perimeter;
	
	printf("What is the length of the rectangle? \n");
	scanf("%f", &length);
	
	printf("What is the width? \n");
	scanf("%f", &width);
	
	area = ("%f", length)*("%f", width);
	perimeter = (("%f", length)+("%f", width))*2;
	
	printf("The area of the rectangle is %.fcm^2 and the perimeter is %.fcm. ", area, perimeter);
	
	return 0;	
}
