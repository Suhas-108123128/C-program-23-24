#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,c,t;
	c=0;
	char str1[]="the the";
	//printf("enter the string:");
//	fflush(stdin);
//	scanf("%[^\n]s",str1);
	t=strlen(str1);
	printf("%d",t);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==' ' && str1[i+1]=='t'&& str1[i+2]=='h'&&str1[i+3]=='e'&&str1[i+4]==' ')
		c++;
	}
	if(str1[0]=='t'&&str1[1]=='h'&&str1[2]=='e'&&str1[3]==' ')
	c++;
	if(str1[t-4]==' '&&str1[t-3]=='t'&&str1[t-2]=='h'&&str1[t-1]=='e')
	c++;
	printf("the freq of the is: %d",c);
}
