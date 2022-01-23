#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j=0;
	gets(str1);
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]==str2[j])
		break;
		j++;
	
	}
	if(str1[i]>str2[--j])
	printf("unmatched character of string 1 is greater");
	else if(str1[i]<str2[--j])
	printf("unmatched character of string 2 is greater");
	else
	printf("same strings");
	
	
}
