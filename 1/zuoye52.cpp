#include<stdio.h>
int main()
{
	int m;
	scanf("%d", &m);
	for(int i = 0; i < m; i++){
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	{
		while (n != i)
		{
			if ((n % i) == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d\n", n);}
	return 0;
}
