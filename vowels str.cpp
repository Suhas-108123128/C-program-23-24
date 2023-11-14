#include<stdio.h>
int main()
{
	int i,l,c;
	l=0;
	c=0;
	char str1[100];
	char str2[100];
	printf("enter the string:");
	scanf("%s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
		{
		
		printf("%c",str1[i]);
	}
	}
}
