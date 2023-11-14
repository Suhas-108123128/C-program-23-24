#include<stdio.h>
int main()
{
	int i,j,l,s;
	s=0;
	l=0;
	char str1[100];
	char str2[100];
	printf("enter string 1:");
	scanf("%s",str1);
	printf("\n enter string 2:");
	scanf("%s",str2);
		for(i=0;str1[i]!='\0';i++)
	{
		l++;
	}
	for(i=0;str1[i]!='\0';i++)
	{
		if(str2[i]==str1[i])
		{
		
		s++;
	}
	}
	if(l==s)
	printf("they r equal");
	else
	printf("they aint equal");
}

	
