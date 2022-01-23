#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int l=0,i;
gets(str);
for(i=0;str[i]!='\0';i++)
{
	l++;
}
printf("%d",l);	
}

