#include<stdio.h>
int main()
{
	int m, n;
	int h;
	scanf("%d", &h);
	for(int k =0; k < h; k++){
	scanf("%d %d", &m, &n);
	if(m < 100 || m > 999 || n < 100 || n > 999 || m >= n){
		printf("Wrong");
		break;
	}
	else{
		for(int i = m; i <= n; i++){
			int a, b ,c; 
			a = i / 100;
			c = i % 10;
			b = (i/10)%10;
			if(i == a*a*a+b*b*b+c*c*c){
				printf("%d ", i);
			}
		}
		if(m>=100&&n<153)
			printf("-1\n");
		if(m>153&&n<370)
		    printf("-1\n");	
		if(m>371&&n<407)
		    printf("-1\n");
		if(m>407)    
		    printf("-1\n"); 
	}
}
	return 0;
}
