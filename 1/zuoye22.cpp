#include<stdio.h>
#include<string.h>
int main()
{
	int M;
	scanf("%d\n", &M);
    char a[200];
    char b[200];
    gets(a); 
    int m , count = 0, x = 0; 
    for(int i = 0; a[i] != '\0'; i++){
    	if(a[i] ==' '){
    		count++;
		}
		else {
			x++;
		}
	}
    m = x + count;
    int i, j = 0;
    for(i = m - M; i < m; i++){
    	b[j] = a[i];
    	j++;
	}
	for(i = 0; i < m -M; i++){
		b[j]=a[i];
		j++;
	}
	for(i=0; i<j; i++){
		printf("%c", b[i]);
	}
	return 0;
}
