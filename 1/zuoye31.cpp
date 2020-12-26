#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a <= 0 || b <= 0 || c <= 0){
			printf("No\n");
		}
		if((a + b) > c && (b + c) > a && (a + c) > b){
		
		if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
			printf("Yes\n");
		}
		else printf("No\n");
	}}
	return 0;
 }
