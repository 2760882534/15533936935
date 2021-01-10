#include<stdio.h>
int main()
{
	int n;
	int count = 0;
	int a[30];
	scanf("%d", &n);
	if(n>30){
		printf("wrong");
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		int temp;
		for(int j=0; j<n-1-i; ++j)  
        {
            if (a[j] <= a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
	}
	for(int i = 0; i < n; i++){
		if(a[i] != a[i+1])
		++count;
	}
	printf("%d", count);
}
