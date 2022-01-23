#include <stdio.h>
#include <string.h>
int main()
{
	 char str[100],c;
	 int i,k;
	 gets(str);
	 printf("enter the character whose occurence  you want to find");
	 scanf("%c",&c);
	 for(i=0;str[i]!='\0';i++)
	 {
	 	if(str[i]==c)
	 	{
	 		k=i;
	 		break;
		}
	 }
	 printf("first occurence found at %d position",k+1);
}
