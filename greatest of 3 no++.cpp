#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b && a>c) || (a==b && a>c) || (a>b && b==c))
	printf("The greatest number is %d",a);
	else if((b>c && b>a) || (b==c && b>a) || (b>c && b==a))
	printf("The greatest number is %d",b);
	else if((c>a && c>b) || (c==a && c>b) || (c>a && c==b))
	printf("The greatest number is %d",c);
	else
	printf("The greatest number is %d",a);
}
