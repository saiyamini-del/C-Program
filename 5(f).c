//5(f) printing patterns using loops.//
#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(int i=-n+1;i<n;i++)
	{
		for(int j=-n+1;j<n;j++)
		{
			int max=abs(i)>abs(j)?abs(i):abs(j);
			printf("%d",max+1);
		}
		printf("\n");
	}
}
