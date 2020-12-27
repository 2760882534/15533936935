#include <stdio.h>
#include <math.h>
int Isprimer(int n);
int main()
{
    int n,i;
    scanf("%d", &n);
    if(n<=6 || n%2==1){
    	printf("ERROR");
	}
	else{
    for(i=3;i<=n/2;i++){
        if(Isprimer(i)&&Isprimer(n-i))
            printf("%d %d\n", i, n-i);
    }}
    return 0;
}
int Isprimer(int n){
    int i;
    for(i=2; i<n; i++){
    	if(n % i == 0){
    		break;
		}
	}
	if(i < n)  return 0;
	else return i;
}
