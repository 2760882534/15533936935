#include<stdio.h>
#include<string.h>
#define size 81
// 
int main()
{
	char *filename = "C:\\Users\\LENOVO\\Desktop\\code\\Gitrepo\\hello-world\\testfile";
	char *pout;      //输出 
	FILE * fp;        //文件指针 
	char * buf[size] = {0};//读取长度 
	int * p;
	fp = fopen(filename,"a+");
    if(fp = NULL){                           //fopen打开失败则返回NULL 
    	printf("wrong");
	} 
	else{
		printf("right");
	}
    fprintf(fp, "%s", "hello");
    
    fclose(fp);
 } 
