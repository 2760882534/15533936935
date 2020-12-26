#include <stdio.h>
int main(void)
{
	int h;
	scanf("%d", &h);
	for(int i = 0; i < h; i++)
	{
	int n,s,y=0;
	scanf("%d",&n);
	s=n;
	while(s>0)
	{
		y=y*10+s%10;
		s=s/10;
	}
	if(y==n)
	printf("yes\n");
	else
	printf("no\n");}
	return 0;
}
	

			
