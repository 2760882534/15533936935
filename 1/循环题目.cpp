#include<stdio.h>
int main()
{
	int n, i = 2;
	printf("Enter a number: ");
    scanf("%f", n)
	for(i = 2; i * i <= n; i = i + 2)
	printf("%d\n", i*i);
	return 0;
}
