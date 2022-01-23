#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,z,nz;
	printf("enter number of rows and columns");
	scanf("%d %d",&r,&c);
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			if(a[i][j]==0)
			z++;
			else
			nz++;
		}
	}
if(z>nz)
printf("sparse");
else 
printf("dense");	
}
