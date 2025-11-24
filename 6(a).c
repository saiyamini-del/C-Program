//6(a) one dimensional arrays in C
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter size of the array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d integers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];	
	}
	printf("%d",sum);
	return 0;
}
