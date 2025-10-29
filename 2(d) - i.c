//2(d) Conversion of Fahrenheit to Celsius and vice Versa//
//(i)//
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Temp in fahrenheit:");
	scanf("%f", &fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("Temperature in celsius:%2f",celsius);
	return 0;
}
