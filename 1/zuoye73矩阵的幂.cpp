#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d %d", &n, &m);
	long int a[8][8]={0};
	long int b[8][8]={0};
	long int c[8][8]={0};
	int i, j;
	if((m>=1&&m<=7)&&(n>=1&&n<=7))
	{
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
			{
				scanf("%ld", &a[i][j]);
				b[i][j]=a[i][j];
			}
		}
		while(--m!=0)
		{
			for(i=0;i<n;i++)
			{
			    for(j=0;j<n;j++)
				{
				    for(int h=0;h<n;h++)
					c[i][j] += b[i][h]*a[h][j];
			    }
		    }
		    for(i=0;i<n;i++)
		    {
			    for(j=0;j<n;j++){
				   b[i][j]=c[i][j];
			    }
		    }
		}
		for(i=0;i<n;i++)
		{
		    for(j=0;j<n;j++)
			printf("%ld ",c[i][j]);
		    printf("\n");
	    }
	} 
 } 
