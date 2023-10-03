#include<stdio.h>
int main()
{
	int i,n,l;
	printf("enter the no");
	scanf("%d",&n);
	l=n%10;
	for(;n>10;)
	{
	n=n/10;
	i=n%10;
}
    printf("the sum of first and last digit is %d",l+i);	
}
