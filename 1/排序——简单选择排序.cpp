#include<stdio.h>    //7µÈÓÚlen 
int main()
{
	int a[7]={99,10,80,-82,74,96,45};
	int i, j, t, index;
	for(i = 0; i < 7-1; i++)
	{
		t = a[i];
		index = i;
		for(j = i+1; j < 7; j++)
		{
			if(t > a[j])
			{
				t = a[j];
				index = j;
			}
		}
		if(index != i)
		{
			a[index] = a[i];
			a[i] = t;
		}
	}
	for(int m = 0; m < 7; m++){
		printf("%d ", a[m]);
	}
 } 
