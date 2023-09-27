#include <stdio.h>
#include <stdlib.h>

int swap(int a, int b, int temp) {
    
	temp = a;
    a = b;
    b = temp;
    
    return a, b, temp;
}

int main() {
	
	int a, b, temp;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: num1 = %d, num2 = %d\n", a, b);

    //printf("%lf %lf", swap(a, b, temp));

    printf("After swapping: num1 = %d, num2 = %d\n", swap(a, b, temp), swap(a, b, temp));

    return 0;
}

/*int swap(int a, int b) {
	
	
}

int main() {
	
	
}*/
