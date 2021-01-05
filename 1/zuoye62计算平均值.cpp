#include<stdio.h>
int main()
{
	int sum = 0;
	int N, a;
	scanf("%d", &N);
	if(N < 1 || N > 100){
		printf("Wrong");
	}
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		sum += a;
	}
	float ar = (float)sum / (float)N;
	printf("%.2f", ar);
 } 
