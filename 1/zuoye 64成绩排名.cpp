#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct student{
	char name[10];
	char sid[18];
	int score;
	char str[4];
}st[100];
int main()
{
	int n, i;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s", st[i].name);
		scanf("%s %s", st[i].sid, st[i].str);
		st[i].score = 0;
	}
	for(i=0; i < n; i++)
	{
		if(strcmp(st[i].str,"n/a") == 0)
		{
			st[i].score = -1;
		}
		else
		{
			for(int j=0;j<strlen(st[i].str);j++)
			st[i].score=st[i].score*10+st[i].str[j]-'0';
		}
	 } 
	 int max = 0;
	 int min = 101, j, k;
	 for(i=0; i < n; i++)
	 {
	 	if(st[i].score != -1)
	 	{
	 		if(st[i].score > max){
	 			max = st[i].score;
	 			j = i;
			 }
			if(st[i].score < min){
				min = st[i].score;
				k = i;
			} 
		 }
	 }
	 int high[100],low[100];
	int x=0,y=0;
	for(i=0;i<n;i++)
	{
		if(max==st[i].score)
		{
			high[x]=i;
			x++;
		}
		if(min==st[i].score)
		{
			low[y]=i;
			y++;
		}
	}
	int mark1=high[0],mark2=low[0];
	for(i=0;i<x;i++)
	{
		if(strcmp(st[high[i]].name,st[mark1].name)<0) 
		mark1=high[i];
	}
	for(i=0;i<y;i++)
	{
		if(strcmp(st[low[i]].name,st[mark2].name)>0) 
		mark2=low[i];
	}
	printf("%s %s\n",st[mark1].name,st[mark1].sid);
	printf("%s %s",st[mark2].name,st[mark2].sid);
	return 0;
}
