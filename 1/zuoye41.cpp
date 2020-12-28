#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
    int a, b, c, d;
    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);
		int max , min , second, third; 
		if(b >= a){
			max = b;
			min = a;
		} 
		else
		{
			max = a;
			min = b;
		}
		if(c >= max){
			second = max;
			max = c;
		}
		else if(c <= min){
			second = min;
			min = c;
		}
		else{
			second = c;
		}
		if(d >= max){
			third = second;
			second = max;
			max = d;
		}
		else if(d <= min){
			third = min;
			min = d;
		}
		else if(d > second && d < max) 
		{
			third = second;
			second = d;
		}
		else 
		{
			third = d;
		}
		printf("%d %d %d %d\n", min, third, second, max);
    } 
    return 0;
}


