#include<stdio.h>
int main()
{
	int a;
	printf("Monday=1\nTuesday=2\nWednesday=3\nThursday=4\nFriday=5\nSaturday=6\nSunday=7\n");
	printf("Enter the desired code:\n");
	scanf("%d",&a);
	if(a==1)
	printf("Monday");
	else if(a==2)
	printf("Tuesday");
	else if(a==3)
	printf("Wednesday");
	else if(a==4)
	printf("Thursday");
	else if(a==5)
	printf("Friday");
	else if(a==6)
	printf("Saturday");
	else if(a==7)
	printf("Sunday");
	else
	printf("Invalid number");
	return 0;
}
