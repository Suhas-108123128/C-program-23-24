#include<stdio.h>
int main()
{
    int i,n,j,s,k;
    s=0;
    k=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    int b[100];
    int c[100];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[s]=a[i];
            s++;
        }
        else
        {
        c[k]=a[i];
        k++;
        }
    }
    for(i=0;i<s;i++)
    printf("%d",b[i]);
    printf("\n");
    for(i=0;i<k;i++)
    printf("%d",c[i]);
}
