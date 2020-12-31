#include<stdio.h>
int main()
{
	char date1[] = "june 16";
	printf("%s", &date1[3]);
	date1[3] = 'u';
    printf("%s", &date1[3]);
    return 0;
 } 
