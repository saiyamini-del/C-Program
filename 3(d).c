//3(d) find the maximum of three numbers using conditional operator//
#include<stdio.h>
int main()
{
	//declare the varibales
	int a,b,c,max;
	//get the three numbers from user
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	//checks if a>b,if yes,exp1 executes, if not,ep2 executes
	max=a>b?(a>c?a:c):(b>c?b:c);
	//print the result
	printf("Largest among the three numbers is %d",max);
	return 0;
}
