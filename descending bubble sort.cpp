#include<stdio.h>
int main()
{
	int a[100],i,n,temp,j;
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(a[j]<a[j+1])
		{
	    	temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
		
		
		
	}
		for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
	
}
