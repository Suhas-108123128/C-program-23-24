#include<stdio.h>
int main()
{
	int i,c,n,j;
	c=0;
	printf("enter the no");
	scanf("%d",&n);
	for(i=n;i!=0;c+=j)
	{
		i=n%10;
		j=i;
		n=n/10;
	}
	printf("the sum of digits is %d",c);
}
