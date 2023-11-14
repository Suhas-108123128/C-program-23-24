#include<stdio.h>
int main()
{
	int i,l,c;
	l=0;
	c=0;
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
	
		if(str1[i]==str1[l-i-1])
		c++;
	}
	if (l==c)
	printf("its a pallindrome");
	else
	printf("not a pallindrome");

}
