#include<stdio.h>
int main()
{
int a[100][100],b[100][100],c[100][100],i,j,k,m,n,p,q,s;

printf("enter number of rows and coulmns");
scanf("%d %d %d %d",&m,&n,&p,&q);
for(i=0;i<=m-1;i++)
{
	for(j=0;j<=n-1;j++)
	{
			scanf("%d",&a[i][j]);
			
	}
}
for(i=0;i<=p-1;i++)
{
	for(j=0;j<=q-1;j++)
	{
			scanf("%d",&b[i][j]);
			
	}
}
for(i=0;i<=m-1;k++)
	{
		for(j=0;i<=q-1;j++)
		{     s=0;
			for(k=0;k<=n-1;k++)
			{ 
				c[i][j]=s+a[i][k]*b[k][j];
			}
		}
	}

for(i=0;i<=m-1;i++)
{
	for(j=0;i<=q-1;j++)
	printf("%d",c[i][j]);
	printf("\n");
}
}
