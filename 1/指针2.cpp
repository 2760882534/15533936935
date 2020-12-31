#include<stdio.h>
void huhuan(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t; 
}
 int main(void)
 {
 	int a = 3;
 	int b = 5;
 	huhuan(&a, &b);
 	printf("%d,%d", a, b);
 }
