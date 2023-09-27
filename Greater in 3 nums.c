#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b, c;
	
printf("Finding the bigger number of the given values\n");
	
	printf("Enter your numbers:\n");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a>c && a>b){
		printf("%d is the bigger number", a);
		
	}else if(b>c){
		printf("%d is the bigger number", b);
		
	}else {
		printf("%d is the bigger number", c);
	}
	return 0;
}
