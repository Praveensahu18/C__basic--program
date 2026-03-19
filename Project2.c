#include<stdio.h>
void main()
{
	int a,b,w,x,y,z;
	char n;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter operator of n:");
	scanf("%s",&n);
	printf("enter value of b:");
	scanf("%d",&b);
	w=a+b;
	x=a-b;
	y=a*b;
	z=a/b;
	switch(n)
	{
		case '+':
			{
				
				printf("%d",w);
				break;
			}
		case '-':
			{
				printf("%d",x);
				break;
			}
		case '*':
			{
				printf("%d",y);
				break;
			}
		case '/':
			{
				printf("%d",z);
			}
	}
}
