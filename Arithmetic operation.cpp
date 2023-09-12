#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter the desired two numbers:");
	scanf("%d %d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("Sum of two numbers is %d\n",c);
	printf("Difference of two numbers is %d\n",d);
	printf("Product of two numbers is %d\n",e);
	printf("Division of two numbers is %d\n",f);
	return 0;
}
