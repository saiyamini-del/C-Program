//5(e) palindrome or not//
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rn=0,tnum,rem;
	printf("Enter a number: ");
	scanf("%d",&num);
	//storing num in tnum//
	tnum=num;
	//finding out the reverse of the given number//
	while(tnum!=0)
	{
		int rem=tnum%10;
		rn=rn*10+rem;
		tnum=tnum/10;
	}
	//comparing
	if(num==rn)printf("Palindrome");
	else printf("Not a Palindrome");
	return 0;
}
