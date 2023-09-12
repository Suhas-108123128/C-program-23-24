#include<stdio.h>
int main()
{
	int a,b,c;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
	c=b;
	b=a;
	a=c;
	printf("The swapped numbers are %d %d",a,b);
	return 0;
}
