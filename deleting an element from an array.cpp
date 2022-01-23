#include<stdio.h>
int main()
{
	int a[100],i,j,n,rot,temp,b;
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number of rotations");
	scanf("%d",&rot);
	for(i=1;i<=rot;i++)
	{
		temp=a[0];
     for(j=0;j<=n-1;j++)
     {
     	b=a[j+1];
     	a[j+1]=a[j];
		a[j]=b;	
	 }
	 a[n-1]=temp;
	 	
	}
	for(i=0;i<=n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
