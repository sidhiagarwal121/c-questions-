#include<stdio.h>
int main()
{
	 int array[10][10];
        int i, j, m, n, sum = 0,sum2=0;
printf("Enter the order of the matrix\n");
        scanf("%d %d", &m, &n);
 
        printf("Enter the co-efficients of the matrix\n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j) 
            {
                scanf("%d", &array[i][j]);
            }
        }
 
        for (i = 0; i < m; ++i) 
        {
            for (j = 0; j < n; ++j) 
            {
                sum = sum + array[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
	 for (j= 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i) 
            {
                sum2 = sum2 + array[i][j] ;
            }
 
            printf("Sum of the %d column is = %d\n", j+1, sum2);
            sum2 = 0;
 
        }
	
		
		
	}
	

