//palindrome or not//
#include<stdio.h>
int main()
{
	int num,rn=0,tnum,rem;
	printf("Enter an integer: ");
	scanf("%d",&num);
	tnum=num;
	while(tnum!=0)
	{
		rem=tnum%10;
		rn=rn*10+rem;
		tnum/=10;
	}
	if(num==rn)
			printf("%d is a palindrome number.\n",num);
		else
		printf("%d is not a palindrome number.\n",num);
		
	return 0;
}
