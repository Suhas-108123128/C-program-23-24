#include<stdio.h>
int main()
{
	int i,j,n,s,a;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<i+1;j++)
		printf("*");
		for(s=0;s<2*(n-i-1);s++)
		printf(" ");
		for(a=0;a<i+1;a++)
		printf("*");
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		printf("*");
		for(s=0;s<2*i;s++)
		printf(" ");
		for(a=0;a<n-i;a++)
		printf("*");
		printf("\n");
	}
}
