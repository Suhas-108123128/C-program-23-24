#include<stdio.h>
int main()
{
    int i,j,t,c,n;
    c=0;
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
	printf("the unique elements are");
	for(i=0;i<c;i++)
	printf("%d",b[i]);
	if(a[n-1]!=a[n-2])
	{
	printf("%d",a[n-1]);
	}
}
