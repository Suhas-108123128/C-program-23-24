#include<stdio.h>
int main()
{
    int i,j,c,n,s;
    c=0;
    printf("enter the value of n,sum");
    scanf("%d%d",&n,&s);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]+a[j]==s)
            printf("%d %d\n",a[i],a[j]);
        }
    }
}
