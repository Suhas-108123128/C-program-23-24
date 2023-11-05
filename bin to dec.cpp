#include<stdio.h>
#include<math.h>
int main() 
{
	int i,n,k,c;
	k=0;
	c=0;
	printf("enter the binary to be converted into decimal:");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		i=n%10;
		c+=pow(2,k)*i;
		k++;
		n/=10;	
	}
	printf("the decimal form is: %d",c);
}

