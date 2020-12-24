#include<stdio.h>
#define N 10
int main()
{   for(;;){
	int a[9], i, q;
    for(i = 0; i <= 4; i++)
	scanf("%d", &a[i]);
	if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0)
	break;
    if(a[4]-a[3] == a[3]-a[2] && a[3]-a[2] == a[2]-a[1]&&a[2]-a[1]==a[1]-a[0])
	{
	printf("case one\n");
	for(i=5;i<N;i++){
	a[i] = i * (a[1] - a[0]) + a[0];
	printf("%d ", a[i]);} 
	printf("\n"); 
}   if(a[4] * a[2] == a[3] * a[3] && a[2]*a[2]==a[1]*a[3]&& a[1]*a[1]==a[0]*a[2])
    {
	printf("case two\n");
    for(i=5;i<N;i++){
	
    q = a[2] / a[1];
    a[i]= a[i-1]*q;
    printf("%d ", a[i]);}
	printf("\n");
	}
   if(a[4]==a[3]+a[2]&&a[3]==a[2]+a[1]&&a[2]==a[1]+a[0]){
		printf("case three\n");
		for(i=5;i<N;i++){
			a[i]=a[i-1]+a[i-2];
			printf("%d ", a[i]);}
			printf("\n");
		
	}}
	return 0;
	
 }
 

	
   
