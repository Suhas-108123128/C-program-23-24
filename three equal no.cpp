#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c &&c==a)
	printf("Equal");
	else
	printf("Not equal");
	return 0;
}
