//calculate program using switch case//
#include<stdio.h>
int main()
{
	int A=5,B=3;
	printf("Enter A and B values:");
	scanf("%d%d",&A,&B);
	getchar();
	char ch;
	printf("\nEnter integer character(1-+,2--,3-*,4-/):");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
			printf("\n SUM=%d",A+B);
			break;
		case '-':
			printf("\n Diff=%d",A-B);
			break;
		case'*':
			printf("\n MUL=%d",A*B);
			break;
		case'/':
			printf("\n Divison=%d",A/B);
			break;
		
		default:printf("\n Invalid operator");
	}
	return 0;
}

