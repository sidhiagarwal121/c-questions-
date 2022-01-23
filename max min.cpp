#include<stdio.h>
int main()
{
	int a[5],i,b=0,c=0,k;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	
	for(i=1;i<=4;i++)
	{ 
		if(a[i]>max)
		{
		max=a[i];
		
	
	
}
	
		if(a[i]<min)
		{
		min=a[i];
		

}
	}
		printf("\nmin is %d\n",min );
	printf("max is %d\n",max);
}

