//2(C) bitwise operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("Bitwise Operations:\n");
	printf("Bitwise AND(&)\n%d & %d = %d\n",a,b,a & b);
	printf("Bitwise OR (|)\n%d | %d = %d\n",a,b,a|b);
	printf("Bitwise XOR(^)\n%d ^ %d = %d\n",a,b,a^b);
	printf("Left Shift(<<)\n%d << %d = %d\n",a,b,a<<b);
	printf("Right Shift (>>)\n%d >> %d = %d\n",a,b,a>>b);
	return 0;
}   
