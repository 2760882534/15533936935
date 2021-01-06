#include<stdio.h>
int main()
{	
   int a[40], n = 2;
   a[0] = 0;
   a[1] = 1;
    while(n <= 40)
    a[n+1] = a[n] + a[n-1];
    n++;
    printf("%d", a[n+1]);
    return 0;
}
