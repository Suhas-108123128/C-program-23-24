#include<stdio.h>
int main()
{
    int i,k,c,n;
    c=0;
    printf("enter the value of n,k");
    scanf("%d%d",&n,&k);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        c++;
    }
    printf("the frequency is %d",c);
    
    
}
