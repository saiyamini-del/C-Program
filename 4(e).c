//4(d) find the given year is a leap year or not,year should be YYYY//
#include<stdio.h>
int main()
{
	int y;
	printf("Enter the year to check: ");
	scanf("%d",&y);
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
		printf("It is a leap year");
	else
		printf("It is not a leap year");
	return 0;
}
