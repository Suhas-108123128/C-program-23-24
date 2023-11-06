#include<stdio.h>
int main()
{
    int i,n,j,c,w,t,f;
    f=0;
    c=0;
    w=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    int b[100];
    int d[100];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    	if(a[i]>=0)
    	{
    	b[c]=a[i];
    	c++;
    }
    
	}
	for(i=0;i<c-1;i++)
    {
        for(j=0;j<c-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j+1];
                b[j+1]=b[j];
                b[j]=t;
        }
    }
    
    for(i=0;i<c-1;i++)
    {
    	if(b[i]!=b[i+1])
    	{
        d[w]=b[i];       	  
		w++;
    	}
	}
	printf("the unique elements are");
	for(i=0;i<w;i++)
	{
	printf("%d",d[i]);
	f++;
}
	if(b[c-1]!=b[c-2])
	{
	printf("%d",b[c-1]);
	f++;
	}
	printf("%d",f);

}
}


	
	
	
