#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b, ans;
	char opp;
	
printf("Operators using switch case: \n\n");

	printf("Enter the first value:\n");
	scanf("%d", &a);
	
	printf("Enter the second value:\n");
	scanf("%d", &b);
	
	printf("Enter the operator 'x', '/', '+' or '-' \n");
	opp = getch();
		
	switch(opp){
	
	case 'x':
	ans = a * b;
	printf("%dx%d = %d", a, b, ans);
	break;
	
	case '+':
	ans = a + b;
	printf("%d+%d = %d", a, b, ans);
	break;
	
	case '/':
	ans = a / b;
	printf("%d/%d = %d", a, b, ans);
	break;
	
	case '-':
	ans = a - b;
	printf("%d-%d = %d", a, b, ans);
	break;
	
	default:
	printf("Invalid operator");
	}
 	
	return 0;
}
