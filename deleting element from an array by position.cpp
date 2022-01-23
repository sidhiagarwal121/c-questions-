#include<stdio.h>
int main()
{
	int a[100],i,j,pos,n;
	printf("enter size of the arry");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter pos of the ele to be deleted");
	scanf("%d",&pos);

		for(j=pos-1;j<=n-1;j++)
		{
			a[j]=a[j+1];
		}
		n--;
	
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
