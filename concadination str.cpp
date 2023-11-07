#include<stdio.h>
int main()
{
	int i,j,l,s;
	s=0;
	l=0;
	char str1[100];
	char str2[100];
	char str3[100];
	printf("enter string 1:");
	scanf("%s",str1);
	printf("\n enter string 2:");
	scanf("%s",str2);
		for(i=0;str1[i]!='\0';i++)
	{
		s++;
	}
		for(i=0;str2[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;str2[j]!='\0';j++)
	{
		str3[j+s]=str2[j];
	}
	printf("%s",str3);
}
	
	
