#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,SI,a,b,CI;
	printf("Enter the principal value , rate of interest and the time:\n");
	scanf("%d %d %d",&p,&r,&t);
	SI=p*r*t/100;
	printf("The simple interest is %d :\n",SI);
	a=1+(r/100);
	b=pow(a,t);
	CI=p*b;
	printf("The compound interest is %d :\n",CI);
	return 0;
}
