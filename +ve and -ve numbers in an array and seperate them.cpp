#include<stdio.h>
int main()
{
	int a[5],b[5],c[5],d[5],n,i,c1=0,c2=0,c3=0;
		int j=0,k=0,l=0;
	printf("enter size of the array ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	
	if(a[i]>0)
	{
	 
		b[j]=a[i];
		j++;
		c1++;
	}
	else if (a[i]<0)
		{
		
		c[k]=a[i];
		k++;
		c2++;
	}
	else 
	{
		d[l]=a[i]; 
		l++;
		c3++;
	}
		
	}
	
	printf("all positive numbers are \n");
	for(j=0;j<c1;j++)
	
	{
	
		printf("%d\n",b[j]);
	}
	printf("all negative  numbers are\n ");
	for(k=0;k<c2;k++)
		
	{
		
		printf("%d\n",c[k]);
	}
	printf("all zero numbers are \n");
	for(l=0;l<c3;l++)
		
	{
		
		printf("%d\n",d[l]);
	}
	
}
