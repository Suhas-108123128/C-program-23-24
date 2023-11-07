#include<stdio.h>
int main()
{
	int i,j;
	j=0;
	char str[100];
	printf("enter the string");
	scanf("%s",str);
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i]+=32;
	}
printf("%s",str);
}
