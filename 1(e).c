/* write a simple program to read int, float,char and string using scanf() and
display using printf() in all the above given platforms*/
#include<stdio.h>
#include<string.h>
int main()
{
	int a;
	float b;
	char ch;
	char str[101];
	printf("enter a character:");
	scanf("%c",&ch);
	printf("enter a number :");
	scanf("%d",&a);
	printf("enter a floating point value:");
	scanf("%f\n",&b);
	printf("enter a string :");
	scanf("%s",str);
	printf("%d\n%f\n\n%c\n%s",a,b,ch,str);
	puts(str);
	return 0;
}


