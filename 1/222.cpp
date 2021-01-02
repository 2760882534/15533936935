#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#define N 2000
int main(){
	char a[N];char b[N]; char c[N];
	int m=0;
	while((a[m]=getchar())!=EOF)
	  m++;
	  a[m]=0;
	  int x=0,y=0;
	for(int i = 0;i <= strlen(a); i++){
		if(a[i]==' '||a[i]=='\n'){
			b[x]=32;
			x++;
			for(int j=i+1;;j++){
				if(a[j]==' '||a[j]=='\n'){
					continue;
				}
				else
				{
					b[x]=a[j];
					x++;
					i=j;
					break;
				}
			}
		}
		else
		{
			b[x]=a[i];
			x++;
		}
	} 
	for(int i=0;i<=strlen(b);i++){
		if(b[i]>='A'&&b[i]<='Z'){
			b[i]=b[i]+32;
		}
	}
	for(int i=0;i<=strlen(b);i++){
		if(b[i]==32||b[i]==0||(b[i]>='A'&&b[i]<='z')){
			c[y]=b[i];
			y++;
		}
	}
	int temp=0;
	//printf("%s",c);
	//弄一个计次计；
	  for(int i=0;i<strlen(b);i++){
		if(b[i]==32)
		 temp++;
	  } 
	char divide[temp][200];
	int num[temp];
	int p=0,q=0;
	for(int i=0;i<temp;i++)
	    num[i]=1;
	for(int i=0;i<=strlen(c);i++){
		if(c[i]!=32){
			divide[p][q]=c[i];q++;continue;
		}
		else if(c[i]==32){
			divide[p][q]=0;p++;q=0;
		}
		else if(c[i]==0){
			divide[p][q]=0;break;
		}
	}
	//for(int i=0;i<temp;i++)
	//printf("%s\n",divide[i]);
	for(int i=0;i<temp;i++){
		for(int j=i+1;j<temp;j++){
			if(strcmp(divide[i],divide[j])==0)
			num[i]++;
		}
	}
     int max=num[0];
    for(int i=0;i<temp;i++){
    	if(max<num[i])
    	   max=num[i];
	}
	int l=0;
	for(int i=0;i<temp;i++){
		if(max==num[i])
		  l++;
	}
	char divide1[l][200];q=0;
	for(int i=0;i<temp;i++){
		if(num[i]==max){
		   strcpy(divide1[q],divide[i]);
		   q++;
	}
	}
	char r[200];
	strcpy(r,divide1[0]);
	for(int i=0;i<l;i++){
	   	if(strcmp(r,divide1[i])==-1)
	   	   strcpy(r,divide1[i]);
	}
	printf("%s %d\n",r,max);
}
