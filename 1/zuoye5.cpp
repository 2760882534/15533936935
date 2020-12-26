#include<stdio.h>
#include<string.h>
 struct student 
{
 	char name[10];
 	char sid[18];
 	float score;
};
 int main(void)
{
	 int i = 1, n;
	 char str1, *p;
	 p = &str1;
	 scanf("%d  %s", &n, &str1);
	struct student s[i];
	for(i=1; i<=n; i++){
		scanf("%s %s %d", &s[i].name, &s[i].sid, &s[i].score);}
	if(strstr(s[i].name, p) != NULL || s[i].name == p){
     printf("%s %s %d", s[i].name, s[i].sid, s[i].score);
	}
	if(strstr(s[i].sid, p) != NULL || s[i].sid == p){
		printf("%s %s %d", s[i].name, s[i].sid, s[i].score);
	}
	if(str1 == s[i].score){
		printf("%s %s %d", s[i].name, s[i].sid, s[i].score);
	}return 0;
	}
	


