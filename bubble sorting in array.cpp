#include<stdio.h>
int main()
{
	int a[100],i,j,temp,n;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=1;j<=n-1;j++)
	{
		for(i=0;i<=n-j-1;i++)
		{
			if(a[i+1]<a[i])
			{
			temp=a[i+1];
			a[i+1]=a[i];
			a[i]=temp;	
			}
		}
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
