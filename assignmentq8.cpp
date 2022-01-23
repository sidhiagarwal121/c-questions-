#include<stdio.h>
int main()
{
	char str[100],v[100],a[100],d[100],sp[100];
	int i,j=0,k=0,l=0,m=0;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			v[j]=str[i];
			j++;
		}
		else if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
		{
			a[k]=str[i];
			k++;
		}
		else if(str[i]>='0'&&str[i]<='9')
     	{
		d[l]=str[i];
		l++;
	    }
	    else
	    {
	    	sp[m]=str[i];
	         m++;
		}
	    
	}
	puts(a);
	puts(d);
	puts(v);
	puts(sp);
	
	
}
