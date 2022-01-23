#include<stdio.h>
int main()
{
	int a[100][100],i,j,r,c,f=0;
	printf("enter no of rows and columns in the matrix");
	scanf("%d %d",&r,&c);
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}               
	if(r==c)
	{
		for(i=0;i<=r-1;i++)
		{
			for(j=0;j<=c-1;j++)
			{
			if(i==j&&a[i][j]!=1)
			f=1;
			else if (i!=j&&a[i][j]!=0)
			f=1;
			
		
		    }
		}
		if(f==0)
		printf("identity matrix");
		else 
		printf("not identity");
	}
	else 
	printf("invalid matrix");
	
		
}
