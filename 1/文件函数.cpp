#include<stdio.h>
#include<string.h>
#define size 81
// 
int main()
{
	char *filename = "C:\\Users\\LENOVO\\Desktop\\code\\Gitrepo\\hello-world\\testfile";
	char *pout;      //��� 
	FILE * fp;        //�ļ�ָ�� 
	char * buf[size] = {0};//��ȡ���� 
	int * p;
	fp = fopen(filename,"a+");
    if(fp = NULL){                           //fopen��ʧ���򷵻�NULL 
    	printf("wrong");
	} 
	else{
		printf("right");
	}
    fprintf(fp, "%s", "hello");
    
    fclose(fp);
 } 
