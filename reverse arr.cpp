#include<stdio.h>
int main()
{
	int n,i,j,l,h,t;
	printf("enter the value of n");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array");
	for(j=0;j<n;j++)
	scanf("%d",&a[j]);
	for(i=0;i<(n+1)/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
	
	
