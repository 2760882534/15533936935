#include<stdio.h> 
int main()
{
//	int a = 18, * p;
//	 p = &a;
//	printf("%d", *p);
    int a = 18,* p = & a;    //*p = a是错的 
    printf("%d\n",*p);
    
    float *x,c;
    x = &c;
    scanf("%f",x);             //用指针写只能写地址 
    printf("%f",c);
}
