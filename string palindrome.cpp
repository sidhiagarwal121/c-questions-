#include<stdio.h>
#include<string.h>
int main()
{
	char  str[100];
	int i,l;
	gets(str);
	for(i=0,l=strlen(str);str[i]!='\0'&&i<l;i++,l--)
	{
		if(str[i]==str[l-1]);	
		else
	{
	    printf("not palindrome");
		return 0;
	}
	}
	 printf("palindrome");
	
}
