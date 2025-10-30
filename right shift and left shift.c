//write a c program to perform right shift and left shift operators//
#include<stdio.h>
int main()
{
	int x,m,r,l;
	printf("enter a value");
	scanf("%d",&x);
	printf("enter how many bits are moving____");
	scanf("%d",&m);
	r=x>>m;
	printf("right shift=%d",r);
	l=x<<m;
	printf("\n left shift=%d",l);
	return 0;
}
