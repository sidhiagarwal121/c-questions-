#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],t;
	int l;
	int i,j;
	gets(str);
	l=strlen(str);
	l--;
	j=l;
	
	while(j>i)
	{
	t=str[j];
	str[j]=str[i];
	str[i]=t;
	j--;
	i++;	
	}	
	
	puts(str);
	
	
	
	

	
}
