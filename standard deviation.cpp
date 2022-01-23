#include<stdio.h>
#include<math.h>

int main()
{
	int a[20],s=0,i,j,mean,vs=0,b[20];
	float sd,variance;
	for(i=0;i<=19;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
		
	}
	mean=(float)s/20;
	for(j=0;j<=19;j++)
	{
		
		b[j]=mean-a[j];
	}
	for(j=0;j<=19;j++)
	{
		vs=vs+b[j]*b[j];
	}
	variance=(float)vs/20;
	sd=sqrt(variance);
	printf("%f",sd);
}
