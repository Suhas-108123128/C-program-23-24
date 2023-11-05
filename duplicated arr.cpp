#include<stdio.h>
int main()
{
    int i,j,c,n;
    c=0;
    printf("enter the value of n");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]==a[j])
        {
        printf("%d",a[i]);
        break;
        }
        }
    }
}
