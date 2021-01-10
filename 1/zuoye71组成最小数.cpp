#include<stdio.h>
int main()
{
	int a[10];
	int sum = 0;
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if(sum < 1 || sum > 50)
	{
		printf("Wrong");
	}
	else
	{
		for(i = 0;i < 10; i++)
		{
			if(a[0] == 0){
				while(a[i]!=0){
					printf("%d", i);
					a[i]--;
					}
				}
			else 
				    {
						while(a[i+1]!=0&&i+1<=10)
						{
							printf("%d", i+1);
							for(;;){
								if(a[0] == 0)
								break;
								else
								printf("0");
								a[0]--;
							}
							a[i+1]--;
						}
					}
				}
		}
	}
 
