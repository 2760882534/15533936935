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
		int *result = NULL;                //�����������ս��
    int num1Len = strlen(num1);        //num1�ĳ���
    int num2Len = strlen(num2);        //num2�ĳ���
    int resultLen;                     //�������󳤶�
    int i, j;                          //ѭ��������
    resultLen = num1Len + num2Len;     //����������Ϊnum1���Ⱥ�num2����֮��
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
