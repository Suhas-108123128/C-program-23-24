#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter the required radius of your circle:");
	scanf("%d",&r);
	c=3.14*r*r;
	printf("The area is %d",c);
	return 0;
}
