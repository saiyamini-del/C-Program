//write a c program for the given numbers is even or odd//
#include<stdio.h>
int main()
{
	int n;
	printf("enter n number");
	scanf("%d",&n);
	n%2==0 ?
	printf("%d is even",n):printf("%d is odd",n);
	return 0;
}
