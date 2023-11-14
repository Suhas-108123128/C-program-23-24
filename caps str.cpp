#include<stdio.h>
int main()
{
	int i,l,c;
	c=0;
	char str1[100];
	printf("enter the string:");
	scanf("%[^\n]s",str1);
	for(i=0;str1!='\0';i++)
	{
		if(str1[i]==' ')
		{
			str1[i+1]=str1[i+1]-32;
		}	
	}
	str1[0]=str1[0]-32;
	printf("%s",str1);
	return 0;
}
