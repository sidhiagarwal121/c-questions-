#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],i,j,p,q,c;
  for(i=0;i<=9;i++)
  {
  	for(j=0;j<=9;j++)
  	scanf("%d",&a[i][j]);
  }
  for(i=0;i<=9;i++)
  {
  	for(j=0;j<=9;j++)
  	scanf("%d",&b[p][q]);
  }
  	
   for(i=0;i<=9;i++)
  {
  	    for(j=0;j<=9;j++)

            	for(p=0;i<=9;i++)
  
  	                   for(q=0;j<=9;j++)
  	                  {
  	                 	if(a[i][j]=b[p][q])
  	                 	c++;
					   }
  	
  		
  		
	}
	if(c==99)
	printf("winner");
	else
	printf("not winner");
}


