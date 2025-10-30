//write a c program to find maximum of 3 numbers by using ternary operators//
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter a,b,c values");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?(a>c)?a:c:(b>c)?b:c;
	printf("max of 3 numbers is %d",max);
	return 0;
}

