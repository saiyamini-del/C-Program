//5(b) sum of the digits of a 5-digit number//
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a 5-digit number: ");
	scanf("%d",&num);
	int sum=0;
	while(num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("Digit sum: %d",sum);
}
