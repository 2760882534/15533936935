#include<stdio.h>
int main()
{
	char ch;
	int len = 0;
	printf("Enter a massage: ");
    do{
    	scanf("%c", &ch);
    	len++;
	}while(ch != '\n');
	printf("Your message was %d character long.\n", len);
	return 0;
}
