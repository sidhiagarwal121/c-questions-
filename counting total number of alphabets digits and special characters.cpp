#include<stdio.h>
#include<string.h>
int main()
{
	char  str[100];
	int i,a=0,d=0,sp=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
		a++;
		else if(str[i]>='0'&&str[i]<='9')
		d++;
		else
		sp++;
	}
	printf("total number of alphabets are %d digits are  %d and special characters are  %d",a,d,sp);
}
