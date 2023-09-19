#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the sides of the triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b && b==c && c==a)
	printf("This is an equilateral triangle");
	else if((a>b && b==c) || (b>c && c==a) || (c>a && a==b))
	printf("This is an isoceles triangle");
	else
	printf("This is a scalene triangle");
	return 0;
}
