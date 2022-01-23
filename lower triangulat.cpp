#include<stdio.h>
int main()
{
int a[100][100],i,j,r,c;
printf("enter number of rows and coulmns");
scanf("%d %d",&r,&c);
for(i=0;i<=r-1;i++)
{
	for(j=0;j<=c-1;j++)
	{
			scanf("%d",&a[i][j]);
			
	}
}
for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
          {
          	if(i>=j)
          	printf("%d",a[i][j]);
          	else 
          	printf(" ");
		  }
		  printf("\n");
		
	}
}


	
	
	

