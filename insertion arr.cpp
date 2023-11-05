#include<stdio.h>
int main()
{
    int i,n,j,s,k,m,y;
    printf("enter the value of n,y");
    scanf("%d%d",&n,&y);
    int a[n];
    int b[100];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(y>a[i] && y<a[i+1])
        {
        b[i+1]=y;
        s=i+1;
        }
    }
    for(i=0;i<s;i++)
    b[i]=a[i];
    for(i=s+1;i<n+1;i++)
    b[i]=a[i-1];
    for(i=0;i<n+1;i++)
    printf("%d",b[i]);
        
    }
    
    
