#include<stdio.h>
int main()
{
    int i,n,j;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[100];
    for(i=0;i<n;i++)
    {
    	b[i]=a[i];
	}
	for(i=0;i<n;i++)
	printf("%d",b[i]);
}
