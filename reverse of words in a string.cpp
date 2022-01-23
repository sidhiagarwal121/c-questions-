#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];int i,l;
	l=strlen(str);
	l=l-1;
	gets(str);
	for(i=l;i>=0;--i)
	{
		printf("%c",str[i]);
	}
}
