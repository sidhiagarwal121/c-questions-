#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j=0,l;
	gets(str1);
	gets(str2);
	l=strlen(str1);
	for(i=0;str2[i]!='\0';i++)
	{
	
		str1[l]=str2[i];
		l++;
	
	}
	puts(str1);
	
}
