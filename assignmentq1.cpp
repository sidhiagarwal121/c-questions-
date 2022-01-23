#include<stdio.h>
int main()
{
	char str[100],str2[100];
	int i,j=0;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
	
		str2[j]=str[i];
		j++;
	
	}
	puts(str2);
	
}
