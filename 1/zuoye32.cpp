#include<stdio.h>
#include<math.h>
int main(void)
{
	int m;
	scanf("%d", &m);
	int a[9999], b[9999];
	int h, i;
	for(i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < m; i++){	
		b[i]=fabs(a[i]);
	}
	int max;
	for(i = 0; i < m; i++){
		if(i ==0){
			max = b[i];
		}
		if(fabs(max)<fabs(a[i+1]))
		max=a[i+1];

	}
	printf("%d", max);
	return 0;
}
