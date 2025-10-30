//write a c program to impliment bitwise and or operators//
#include<stdio.h>
int main()
{
	int x,y,and,or;
	printf("enter x,y values");
	scanf("%d %d",&x,&y);
	and=x&y;
	printf("\n bitwise and=%d",and);
	or=x||y;
	printf("\n bitwise or=%d",or);
	return 0;
	
}

