#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<n-i-1;s++)
		printf(" ");
		if(i%2==0)
		{
			for(j=0;j<i+1;j++)
			printf("*");
			printf("\n");
		}
		else
		{
			for(j=0;j<i+1;j++)
			printf("_");
			printf("\n");
			
		}
}
for(i=0;i<n-1;i++)
{
	for(s=0;s<i+1;s++)
	printf(" ");
	if (i%2==0)
	{
		for(j=0;j<n-i-1;j++)
		printf("_");
		printf("\n");
		
	}
	else
	{
	for(j=0;j<n-i-1;j++)
			printf("*");
			printf("\n");	
	}
}
}
