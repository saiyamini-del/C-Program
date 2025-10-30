//calculator using if else ladder case//
#include<stdio.h>
void main()
{
	int A=5,B=3;
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	if (ch=='+')
	    printf("\n SUM=%d",A+B);
	else if (ch=='-')
	    printf("\n Diff=%d",A-B);
	else if (ch=='*')
		printf("\n MUL=%d",A*B);
	else if (ch=='/')
		printf("\n Q=%d",A/B);
	else if (ch=='$')
		printf("It is a Dollar Symbol");
	else if (ch=='&')
		printf("&=%d",A&B);
	else 
		printf("\n Invalid");
}
