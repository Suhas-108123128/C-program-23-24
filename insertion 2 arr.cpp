#include<stdio.h>
int main()
{
    int i,n,j,s,k,m,y;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    int b[100];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element and position");
    scanf("%d%d",&k,&m);
    b[m-1]=k;
    for(i=0;i<m-1;i++)
    b[i]=a[i];
    for(i=m;i<n+1;i++)
    b[i]=a[i-1];
    for(i=0;i<n+1;i++)
    printf("%d",b[i]);
}
