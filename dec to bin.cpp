#include<stdio.h>
int main()
{
	int i,n,j,c;
	c=0;
	int a[100];
	printf("enter the decimal number:");
	scanf("%d",&n);
	for(i=0;n!=0;c++,i++)
	{
		j=n%2;
		a[i]=j;
		n=n/2;
	}
	for(i=0;i<c+1;i++)
	printf("%d",a[c-i]);
}
