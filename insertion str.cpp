#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,k;
	char ch;
	char str1[100];
	char str2[100];
	printf("enter the string:");
	scanf("%s",str1);
	fflush(stdin);
	printf("enter the index and the character to be inserted:");
	scanf("%d%c",k,ch);
	for(i=0;i<k;i++)
	{
	str2[i]=str1[i];
}
	str2[k]=ch;
	for(i=k;str1[i]!='\0';i++)
	{
	str2[i+1]=str1[i];
}
	printf("the new string is: %s",str2);
	return 0;
}
	
