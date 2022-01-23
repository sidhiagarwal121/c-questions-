#include<stdio.h>
int main()
{
	int a[100],i,n,m;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=m;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
