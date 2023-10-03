#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the month and year");
	scanf("%d %d",&a,&b);
	if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
	printf("no of days=31");
	else if(a==2&&(b%4==0&&((b%100!=0)||(b%400==0))))
	printf("the no of days is 29");
	else if(a==4||a==6||a==9||a==11)
	printf("the no of days is 30");
	else
	printf("the no of days is 30");
	
}
