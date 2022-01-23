#include<stdio.h>
int main()
{
	int a[100],i,b,c,l,k,n,max,min,temp;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			k=i;
		}
	}
	min=a[0];
	for(i=0;i<=n-1;i++)
	{
		if(a[i]<max)
		{
			min=a[i];
			l=i;
			
		}
	}
	temp=a[k];
	a[k]=a[l];
	a[l]=temp;
	for (i=0;i<=n-1;i++)
	{
		printf("%d",a[i]);
	}
	
	
	
}
