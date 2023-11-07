#include<stdio.h>
int main()
{
	int l,i;
	l=0;
	char str[100];
	printf("enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("length is %d",l);
	}
