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
    scanf("%d",&a[i]);
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
	if(k>=(n+1)/2)
	printf("majority is %d",b[i]);
	k=0;
	
}
}

