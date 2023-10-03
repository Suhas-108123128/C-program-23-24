#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number");
	scanf("%d",&i);
	while(i!=0)
	{
	n=i/10;
	i=n;
}
printf("The length of the number is %d",n);
}
	
