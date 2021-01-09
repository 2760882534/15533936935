#include<stdio.h>
#include<math.h>
int main()
{
	int m;
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		if(m < 0){
			printf("ERROR\n");
		}
		else{
		float h = sqrt(m);
		printf("%.2f\n",h);
		}
	}
	return 0;
}
