#include<stdio.h>
int main()
{
	int i,j,n,c;
	c=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		
		
		c=c+1;
		printf("%d",c);
}
		printf("\n");
	}
}

