#include<stdio.h>
int main()
{
    int i,k,c,n,j;
    c=0;
    k=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scan#include<stdio.h>
int main()
{
    int i,j,t,c,n,k;
    c=0;
    k=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b[100];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    
    for(i=0;i<n-1;i++)
    {
    	if(a[i]!=a[i+1])
    	{
        b[c]=a[i];       	  
		c++;
    	}
	}
	if(a[n-1]!=a[n-2])
	b[c+1]=a[n-1];
	for(i=0;i<c+2;i++)
	{
	for(j=0;j<n;j++)
	{
	if(b[i]==a[j])
	    k++;
	}
	printf(" the frequency of %d is %d",b[i],k);
	k=0;
	}
}f("%d",&a[i]);
    int b[100];
    for(i=0;i<n;i++)
    {
    	if(a[i]!=a[i+1])
        b[c]=a[i];       	  
		c++;
	}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(b[i]==a[j])
		k++;
	}
	printf (" the frequency of %d is %d",b[i],k);
	k=0;
}
}
