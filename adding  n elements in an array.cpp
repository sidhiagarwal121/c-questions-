#include<stdio.h>
int main()
{
	int a[100],ele,pos,i,n,j,numoe;
	printf("enter size of the array");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number of elements you want to add");
	scanf("%d",&numoe);
	j=numoe;
     while(numoe>0)
	{
	printf("enter the element you want to enter");
	scanf("%d",&ele);
	printf("enter the position you want to enter");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=ele;
	numoe--;
	n=n+1;
		
	}
	
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
}
