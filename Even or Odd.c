#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int a;
	
printf("Determining whether a number is even or odd\n");
	
	printf("Enter a number:\n");
	scanf("%d", &a);
	
	if(a % 2 == 0){
		printf("The number is even");
		
	} else {
		printf("It's odd");
	}
}
