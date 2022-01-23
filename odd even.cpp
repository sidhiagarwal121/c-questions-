#include<stdio.h>
int main()
{
	int a[1000],even[1000],odd[1000],i,j=0,k=0,n;
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}
	for(i=0;i<=j-1;i++)
	{
		printf("%d\n",even[i]);
	}
	for(i=0;i<=k-1;i++)
	{
		printf("%d\n",odd[i]);
	}
	
}
