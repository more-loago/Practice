#include <stdio.h>
#include <stdlib.h>


int main() {
	
    int num, digit, count = 0;
	
	printf("Enter a positive number: \n");
	scanf("%d", &num);
	
	if (num <= 0) {
	    do {
	    printf("Enter a positive number \n");
	    scanf("%d", &num);
	        
	    }
	    while(num <= 0);
	}
	while (num > 0) {
	    digit = num % 10;
	    count += digit;
	    num /= 10;
	}
	printf("Sum of digits: %d\n", count);
	
    return 0;
}
