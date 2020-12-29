#include<stdio.h>
#include<stdlib.h>
int maopao(int * a, int n)
{
	int i, j, t;
	for (i=0; i<n-1; ++i) 
    {
        for (j=0; j<n-1-i; ++j)  
        {
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
}
int main(){
	int n;
	int a[100]={0};
	char ch;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int k=0;;k++){
			scanf("%d",&a[k]);
		if((ch=getchar())==' ')
		    continue;
		if(ch=='\n')
		    break;
		} 
		int x[100],y[100];
		int p=0,q=0;
		for(int i=0;i<100;i++){
			if(a[i]!=0 && (a[i]%2==1||a[i]%2==-1)){    //ÆæÊý 
				x[p]=a[i];
				p++;
			}
		}
		for(int i=0;i<100;i++){ 
			if(a[i]!=0&&a[i]%2==0){
				y[q]=a[i];
				q++;
			}
		}
		maopao(x, p);
		maopao(y, q);
		for(int i=0;i<p;i++){
		  if(x[i]!=0)
		  printf("%d ",x[i]);
	}
		for(int i=0;i<q;i++)
		  if(y[i]!=0)
		  printf("%d ",y[i]);
		  printf("\n");
		  for(int i=0;i<100;i++)
		  a[i]=0;
	}
}

