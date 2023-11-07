#include<stdio.h>
int main()
{
	int i,a;
	a=0;
	char c;
	char str[5]="abcd";
	c='b';
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
		a++;
		break;
		}
		
	}
	if(a==0)
	printf("character not found");
	else
	printf("%c%d",c,a);
}
	
