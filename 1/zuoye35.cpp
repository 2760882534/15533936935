#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch;
	char sent[1000];
	while(1){
    gets(sent);
	if(gets(sent) == NULL)
    break;
    char c;
    c = getchar();
    int a[100];
    int len = strlen(sent);
    char able[100];
    for(int i = 0; i < len; i++){
      if(c<48||c>57){
      	printf("None");
	  } 
    }}
    return 0;
}
