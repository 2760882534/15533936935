#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define Int(X) (X - '0') 
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		char num1[500] = {'\0'}, num2[500] = {'\0'}, result[501];
		scanf("%s %s", num1, num2);
		int *result = NULL;                //用来保存最终结果
    int num1Len = strlen(num1);        //num1的长度
    int num2Len = strlen(num2);        //num2的长度
    int resultLen;                     //结果的最大长度
    int i, j;                          //循环计数器
    resultLen = num1Len + num2Len;     //结果长度最大为num1长度和num2长度之和
    result = (int *)malloc((resultLen+1)*sizeof(int));
    memset(result, 0, (resultLen+1)*sizeof(int));
 
    result[0] = resultLen; 
    for(j = 0; j < num2Len; j++)
    {
        for(i = 0; i < num1Len; i++)
        {
            result[i+j+2] += Int(num1[i]) * Int(num2[j]);
        }
    }
    for(i = resultLen; i > 1; i--)
    {
        result[i-1] += result[i]/10;
        result[i] = result[i]%10;
    }
	}
	return result;
}
