#include<stdio.h>
int main()
{
    int i,k,c,n;
    c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[100];
    for(i=0;i<n;i++)
    {
    	if(a[i]!=a[i+1])
        b[c]=a[i];       	  
		c++;
	}
	printf("the unique elements are");
	for(i=0;i<c+1;i++)
	printf("%d",b[i]);
}
