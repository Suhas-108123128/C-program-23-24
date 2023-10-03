#include<stdio.h>
int main()
{
	int i,j,b,n;
	printf("enter the no");
	scanf("%d",&n);
	j=0;
	b=n;
	while(n!=0)
	{
		i=n%10;
		j=j*10+i;
		n=n/10;
}
	if(j==b)
	printf("palindrome");
	else
	printf("not a palindrome");
}
