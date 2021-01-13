# include <stdio.h>
int main(void)
{
    int a[] = {900, 2, 3, -58, 34, 76, 32, 43, 56, -70, 35, -234, 532, 543, 2500};
    int n;  
    int i;  
    int j;  
    int buf; 
    n = sizeof(a) / sizeof(a[0]); 
    for (i=0; i<n-1; ++i) 
    {
        for (j=0; j<n-1-i; ++j)  
        {
            if (a[j] < a[j+1])
            {
                buf = a[j];
                a[j] = a[j+1];
                a[j+1] = buf;
            }
        }
    }
    for (i=0; i<n; ++i)
    {
        printf("%d\x20", a[i]);
    }
    printf("\n");
    return 0;
}
