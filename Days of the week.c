#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;
	
printf("Days of the week \n\n");

	printf("Enter a number:\n");
	scanf("%d", &num);
	
	switch(num){
		
		case 1:
		printf("The %dst day of the week is Monday", num);
		break;
		
		case 2:
		printf("The %dnd day of the week is Tuesday", num);
		break;
		
		case 3:
		printf("The %drd day of the week is Wednesday", num);
		break;
		
		case 4:
		printf("The %dth day of the week is Thursday", num);
		break;
		
		case 5:
		printf("The %dth day of the week is Friday", num);
		break;
		
		case 6:
		printf("The %dth day of the week is Saturday", num);
		break;
		
		case 7:
		printf("The %dth day of the week is Sunday", num);
		break;
		
		default:
		printf("Number out of range");
		break;
	}
	return 0;
}
