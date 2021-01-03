#include<stdio.h>
//int main()
//{
//int a=-1, b=3, k;
//	    k=((++a<0) && (!b--<=0));
//	    printf("%d %d %d\n", k, a, b);
//}
int  main() 
{ 
int a=-1, b=3, k;
	    k=((a++<0) && (!b--<=0));
	    printf("%d %d %d\n", k, a, b);} 
