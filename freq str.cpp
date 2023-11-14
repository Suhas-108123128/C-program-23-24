#include<stdio.h>
int main()
{
	int i,j,c,max,min;
	c=1;
	max=0;
	min=100;
	char max1;
	char min1;
	char str1[100];
	printf("enter the string:");
	scanf("%[^\n]s",str1);
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str1[j]!='\0';j++)
		{
		
		if(str1[i]==str1[j] && i!=j);
		c++;
	}
	if(c>max)
	{
	
	max=c;
	max1=str1[i];
	c=0;
	}
	else if(min>c)
{

	min=c;
	min1=str1[i];
	c=0;
}
	
	
	}
	printf("most and least repeated characters are %c %c",max1,min1);
}
