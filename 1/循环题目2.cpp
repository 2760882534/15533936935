#include<stdio.h>
int main()
{
	int n, sum = 0; 
	printf("Enter integers (): ");
	scanf("%d", &n);
	while(n != 0){
		sum = sum + n;
		scanf("%d", &n);
		
	}
		printf("the sum is: %d", sum);

	return 0;
}
