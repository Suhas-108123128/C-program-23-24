#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (s=0;s<i;s++)
		printf(" ");
		for(j=0;j<n-i;j++)
		printf("*");
		printf("\n");
		
	}
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i;s++)
		printf(" ");
		for(j=0;j<i;j++)
		printf("*");
		printf("\n");
	}
}
