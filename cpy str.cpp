#include<stdio.h>
int main()
{
	int i,j;
	j=0;
	char str1[100];
	char str2[100];
	printf("enter the string");
	scanf("%s",str1);
		for(i=0;str1[i]!='\0';i++)
	{
		j++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	printf("%s",str2);
}
