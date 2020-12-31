//This program printsa table of squares 
#include<stdio.h>
int main()
{int i, n;
	printf("Enter number of entries in table:");
    scanf("%d", &i);
    n = 1;
    while(n <= i){
    printf("%-10d%-10d\n", n, n * n );
    printf("%10d10d\n", n, n*n);
	printf("%.2d%.2d\n", n, n*n); 
    n++;
   }
	return 0;
 } 
