#include<stdio.h>
int main()
{
	int a;
	float b;
	printf("Enter your desired number of days:");
	scanf("%d",&a);
	b=a/365;
	printf("The number of years is %f :",b);
	return 0;
}
