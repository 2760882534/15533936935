#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while(n--){
		int m,t; 
		scanf("%d", &m);
		int a[100];
		for(int i = 0; i < m; i++)
		{
			scanf("%d", &a[i]);
		}
		if(m = 1){
			printf("ERROR\n");
		}
		else 
		for(int i = 0; i < m; i++){
			for(int j = 0; j < m-i; j++){
				if(a[j] < a[j+1]){
					t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
				}
			}
		}
		if(a[0] == a[m-1]){
			printf("ERROR\n");
		}
		else
		printf("%d", &a[1]);
	}
}
