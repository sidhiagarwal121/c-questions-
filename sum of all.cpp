#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,s=0;
	float avg;
	printf("enter number of rows and coulmns");
	scanf("%d %d",&r,&c);
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&a[i][j]);
			s=s+a[i][j];
		}
		
	}
	avg=(float)s/(r*c);
	printf("%d %f",s,avg);
	
}
