#include<stdio.h> 
int main()
{
	int a[7]={99,10,80,-82,74,96,45};
	int i, j;
	for(i = 1; i < 7; i++)
	{
		int t = a[i];
		for(j = i - 1; j >= 0; j--)
		{
			if(t < a[j])
			{
				a[j+1] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1] = t;	
	}
	for(int m = 0; m < 7; m++){
		printf("%d ", a[m]);
	}
 } 
