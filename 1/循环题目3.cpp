#include<stdio.h>
int main()
{
	int i, n, k;
	for(; ;){
		printf("Enter a number£º"); 
		scanf("%d", i);
		if(i == 0)
		break;
	    n = i;
	    k = i > n? i: n;
	    printf("%d",k);
		  
	}
	return 0;
 } 

