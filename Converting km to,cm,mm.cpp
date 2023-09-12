#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number to be converted:");
	scanf("%d",&a);
	b=a*1000;
	c=b*100;
	d=c*10;
	printf("In metre %d :",b);
	printf("In centmetre %d :",c);
	printf("In millimetre %d :",d);
	return 0;
}
