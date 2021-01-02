#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int**num0(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if((i==0||i==6)||(x==n||x==n+4))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num1(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(x==n+4)
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num2(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if((x==n&&i>=3)||(x==n+4&&i<=3))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num3(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if(x==n+4)
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num4(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(x==n+4)
			p[i][x]=1;
			else if(x==n&&i<=3)
			p[i][x]=1;
			else if(i==3)
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num5(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if((x==n&&i<=3)||(x==n+4&&i>=3))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num6(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if((x==n)||(x==n+4&&i>=3))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num7(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||x==n+4)
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num8(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if((x==n)||(x==n+4))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int**num9(int**p,int x){
	int n=x;
	for(x;x<n+5;x++){
		for(int i=0;i<7;i++){
			if(i==0||i==3||i==6)
			p[i][x]=1;
			else if((x==n&&i<=3)||(x==n+4))
			p[i][x]=1;
			else
			p[i][x]=0;
		}
	}
	return p;
}
int main(){
	int n;int x;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char a[10];
	    scanf("%s",a);
	    getchar();
	    int m=strlen(a);
	int**p;
	p=(int**)malloc(sizeof(int*)*7);
	for(int i=0;i<7;i++)
	p[i]=(int*)malloc(sizeof(int)*7*m);
	for(int i=0;i<7;i++)
	for(int j=0;j<5*m;j++)
	  p[i][j]=0;
	    int x=0;
	    for(int i=0;a[i]!=0;i++){
	    	if(a[i]-'0'==0) {
			num0(p,x);x=x+7;
			}
			if(a[i]-'0'==1) {
			num1(p,x);x=x+7;
			}
			if(a[i]-'0'==2) {
			num2(p,x);x=x+7;
			}
			if(a[i]-'0'==3) {
			num3(p,x);x=x+7;
			}
			if(a[i]-'0'==4) {
			num4(p,x);x=x+7;
			}
			if(a[i]-'0'==5) {
			num5(p,x);x=x+7;
			}
			if(a[i]-'0'==6) {
			num6(p,x);x=x+7;
			}
			if(a[i]-'0'==7) {
			num7(p,x);x=x+7;
			}
			if(a[i]-'0'==8) {
			num8(p,x);x=x+7;
			}
			if(a[i]-'0'==9) {
			num9(p,x);x=x+7;
			}
			
		}
		printf("%s:\n",a);
			for(int i=0;i<7;i++){
	 for(int j=0;j<7*m;j++){
	 if(p[i][j]==1)
	 printf("*");
	 else
	 printf(" ");
	 } 
	 printf("\n");
	} 
}
}
