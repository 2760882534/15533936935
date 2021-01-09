#include<stdio.h>
int main()
{
	int m = 0;
	char s;
	while(s = getchar() != '\n'){
		scanf("%s", &s);
		m++;
	}
	printf("%d", m);
 } 
