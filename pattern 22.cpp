#include<stdio.h>
int main()
{
	int i,j,n,c;
	c=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c++;
		for(j=0;j<i;j++)
		printf("%d*",c);
		printf("%d",c);
		printf("\n");
	}
	c=n+1;
	for(i=0;i<n;i++)
	{
		c--;
		for(j=0;j<n-i-1;j++)
		printf("%d*",c);
		printf("%d",c);
		printf("\n");
	}
}
