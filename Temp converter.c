#include <stdio.h>

int main() {

printf("Temperature conversion from celcius to fahrenheit. \n\n");

	float temp, f_temp;
		
	printf("Enter temperature value: \n");
	scanf("%f", &temp);
	
	f_temp = temp*9/5 +32;
	
	printf("The temperature in Fahrenheit is %.2f °F", f_temp);
	
	return 0;
}
