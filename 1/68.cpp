#include<stdio.h>
#include<string.h>
int main()
{
	char str1, str2, m[0];
	int n ;
	scanf("%d", &n);
	for(int i = 0; i <= n; i++){
		scanf("%s %s", str1, str2);
	    m[0] = str1 * str2;
		printf("%d\n", m[0]);
	}
	return 0;
}
