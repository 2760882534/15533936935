#include<stdio.h>
int main()
{
	int len = 0;
	char ch;
	while((ch = getchar() != '\n')){
	len++;
	}
	printf("%d", len);
	return 0;
}
