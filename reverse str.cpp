#include<stdio.h>
int main()
{
	int i,l;
	l=0;
	char str1[100];
	char str2[100];
	printf("enter the string");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;str1[l-i-1]!='\0';i++)
	{
		str2[i]=str1[l-i-1];
	}
	printf("%s",str2);
}
