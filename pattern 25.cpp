#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
	
	printf("*");
	for(j=0;j<2*n-2*i-3;j++)
	{
		printf("_");
	}
	if(n>i+1)
	printf("*");
	printf("\n");
}
}
