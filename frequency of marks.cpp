#include<stdio.h>
int main()
{
int marks[10],i,j;
printf("enter marks of 10 students\n  ")	;
for(i=0;i<=9;i++)
{
 printf("enter marks of student number %d ",i+1);	
 scanf("%d",&marks[i]);
	
}
	for(j=61;j<=99;j++)
{
	int c=0;
	for(i=0;i<=9;i++)
	{
		
	if(marks[i]==j)
	c=c+1;
	
		
	}
	printf("frequency of %d=%d\n",j,c);

	

}


	
}
