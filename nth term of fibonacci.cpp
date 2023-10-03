#include<stdio.h>
int main()
{
	int i,j,b,a,n;
	a=0;
	b=1;
	printf("enter the term you want");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		j=a+b;
		a=b;
		b=j;
	}
	printf("the value of %d th term is %d",n,j);
}
