#include<stdio.h>
int main()
{
	int i;
	char c;
	char str[100];
	printf("enter the string:");
	scanf("%s",str);
	printf("enter the character:");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
		printf("%c%d",c,i);
		}
	}
}
	
