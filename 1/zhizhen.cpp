#include<stdio.h> 
int main()
{
//	int a = 18, * p;
//	 p = &a;
//	printf("%d", *p);
    int a = 18,* p = & a;    //*p = a�Ǵ�� 
    printf("%d\n",*p);
    
    float *x,c;
    x = &c;
    scanf("%f",x);             //��ָ��дֻ��д��ַ 
    printf("%f",c);
}
