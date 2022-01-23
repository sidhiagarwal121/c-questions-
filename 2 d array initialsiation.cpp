#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,temp;
	printf("enter number of rows and coulmns");
	scanf("%d %d",&r,&c);
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&a[i][j]);
		
			
		}
	
	}
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
	temp=a[i][j]+c;
	a[i][j]=a[j][i]+c;
	a[j][i]=temp-c;
        }
}
for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

