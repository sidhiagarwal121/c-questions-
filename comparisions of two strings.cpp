#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],i;
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0'&&str1[i]==str2[i];i++)
	{
	
	}
	if(str1[i]>str2[i])
	printf("different and ascii value of mismatched character of string 1 is greater than string 2");
	else if ((str1[i]<str2[i]))
	printf("different and ascii value of mismatched character of string 2 is greater than string 1");
	else
	printf("same");
	
}
