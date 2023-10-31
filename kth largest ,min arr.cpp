#include<stdio.h>
int main()
{
	int n,i,j,t,k;
	printf("enter the value of n,k");
	scanf("%d%d",&n,&k);
	int a[n];
	printf("enter the elements of the array");
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("kth minimum value= %d",a[k-1]);
	printf("kth maximum value= %d",a[n-k]);
}
