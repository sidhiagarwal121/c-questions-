#include<stdio.h>
int main()
{
	int a[100],i,pos,ele,n;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
		scanf(" enter position = %d and enter element =%d",pos,ele);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
		
	}
	a[pos-1]=ele;
	n++;
	for(i=0;i<=n-1;i++)
	{
		printf("%d",a[i]);
	}
	
}
