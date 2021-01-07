#include<stdio.h>
int main()
{
	int a[7]={99,10,80,-82,74,96,45};
	int i, j, h;
	for(h = 7 / 2; h > 0; h /= 2)//7是数组的长度 ， h定义为数组的增量，即长度除以2 
	{
    for(i = 7/2; i < 7; i++)
	{
		int t = a[i];
		for(j = i - h; j >= 0; j-=h)
		{
			if(t < a[j])
			{
				a[j+h] = a[j];
			}
			else
			{
				break;
			}
		}
		a[j+h] = t;	
	}
}
	for(int m = 0; m < 7; m++){
		printf("%d ", a[m]);
	}
 } 

