#include<stdio.h>
#include<string.h>
int main()
{
	char  str[100],c;
	int i,j;
	gets(str);
	printf("enter the character you want to remove");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		break;
	}
	for(j=i;str[j]!='\0';j++)
	{
		str[j]=str[j+1];
	}
	puts(str);
}
	
	
