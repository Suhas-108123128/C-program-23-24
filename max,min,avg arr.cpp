#include<stdio.h>
int main()
{
	int i,n,a[n],max,min,c;
	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i])	
	c=0;
	printf("enter the value of n\n");
	scand("%d",&n);
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		else
		continue;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	for(i=0;i<n;i++)
	{
		c=c+a[i];
	}
	printf("the maximum , minimum, average %d %d %d",max,min,c/n);
}
