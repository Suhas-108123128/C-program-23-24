#include<stdio.h>
int main()
{
	int b,G,a;
	printf("For metropolitan city press 1 \n For Tier 1 press 1\n For tier 2 press 3 \n For tier 3 press 4");
	scanf("%d",&a);
	printf("The basic salary is:");
	scanf("%d",&b);
	if(a==1)
	{
		/* da=0.48*b,ta=0.08*b,b+da+ta=1.56b*/
		G=1.56*b+0.27*b ;
		printf("The value of G is %d",G);
	}
	else if(a==2)
	{
		G=1.56*b+0.24*b ;
		printf("The value of G is %d",G);
	}
	else if(a==3)
	{
		G=1.56*b+0.16*b ;
		printf("The value of G is %d",G);
	}
	else
	{
		G=1.56*b+0.12*b ;
		printf("The value of G is %d",G);
	}
	return 0;
}
