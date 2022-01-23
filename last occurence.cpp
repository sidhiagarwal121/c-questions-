#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],c;
	int i,j=0,a[100];
	gets(str);
	printf("enter the character to find");
	scanf("%c",&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			a[j]=i;
			j++;
		}
	}
	printf("the last position of the character is %d",a[j-1]+1);
	
}
