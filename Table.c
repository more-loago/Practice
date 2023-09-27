#include <stdio.h>
#include <stdlib.h>

void printTable(int num) {
    
	int i = 1;
	
	printf("Table of %d:\n", num);
    
    while (i <= 12) {
    	int product = i * num;
		printf("%dx%d = %d\n", num, i, product);
    	i = i + 1;
	}
}

int getInput() {
    
	int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
   
    int number;

    number = getInput();

    printTable(number);

    return 0;
}

