#include<stdio.h>
int Age(int n, int k, int a)
{
	int h = 0;
	h += a;
	if(n == 1)
	{
		return h;
	}
	else{
		h = Age(n -1, k ,a) + k;
		return h;
	}
}
int main()
{
     int n,k,a;
     scanf("%d  %d  %d", &n, &a, &k);
     if(n<2||n>100||k<=0||k>100||a<=0||a>100)
     printf("Wrong Number");
     
     else
      
     	printf("%d", Age(n, k, a));
     	return 0;
}
