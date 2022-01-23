#include<stdio.h>
int main()
{
	int a[100],i,n,max,smax;
	printf("enter size of the array \n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	smax=a[1];
	for(i=1;i<=n-1;i++)
	{
		if(a[i]>max)
        {
        	smax=max;
			max=a[i];
              
        }
        else if(a[i]>smax)
        smax=a[i];
	}
	printf("max is %d and second max is %d",max,smax);
}
