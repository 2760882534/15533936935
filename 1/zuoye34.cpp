#include<stdio.h>
int main()
{
   char t[21][31];        //定义全局二维数组 
   int num[20];               //定义数字
   char sign[20];             //定义字符 
   int n,i,j;
   scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        scanf("%c",&sign[i]);
    }
    int max=0,min=0;
    for(i=0;i<n;i++)
    {
        if(num[i]>0&&max<num[i])
        {
            max=num[i];
        }
        else if(num[i]<=0&&min>num[i])
        {
            min=num[i];
        }
    }
    int z = max - min + 1;
    for(j=0;j<n;j++)
    {
        if(num[j]>0)
        {
            for(i=0;i<z;i++)
            {
                if(i < max - num[j] || i > max)
                {
                    t[i][j]=' ';
                }
                else if(i < max && i >= max-num[j])
                {
                    if(sign[j] ==' '|| sign[j] =='\n')
                    {
                        t[i][j]='+';
                    }
                    else{
                        t[i][j]=sign[j];
                    }
                }
                else if(i==max)
                {
                }
            }
        }
        else
        {
            for(i=0;i<z;i++)
            {

                if(i<max || i > max - num[j])
                {
                    t[i][j]=' ';
                }
            
                else if(i>max&&i<=max-num[j])
                {
                    if(sign[j]==' '||sign[j]=='\n')
                    {
                        t[i][j]='+';
                    } else{
                        t[i][j]=sign[j];
                    }
                }
            }
        }
    }
    for(i=0;i<z;i++)
    {
        if(i==max)
        {
            for(j=0;j<n;j++)
            {
            	if(j == n-1)
            	{
                printf("-");
                }
                else printf("--");
            }
        }
        else
        {
            for(j=0;j<n;j++)
            {
                printf("%c ", t[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
