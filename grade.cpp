#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter the marks of physics, chemistry, biology, mathematics, computer:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	if(f>=90)
	printf("The student grade is A");
	else if(f>=80)
	printf("The student grade is B");
	else if(f>=70)
	printf("The student grade is C");
	else if(f>=60)
	printf("The student grade is D");
	else if(f>=40)
	printf("The stduent grade is E");
	else
	printf("The stduent grade is F");
	return 0;
	
}
