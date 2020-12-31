#include<stdio.h>
int main()
{
	int hour, minutes;
	printf("Enter a 24-hour time:");
	scanf("%d:%d",&hour ,&minutes);
	int totalTime = hour * 60 + minutes;
	if(totalTime < (8 * 60 + 9 * 60 + 43)/2)
	printf("Closest time is 8:00 ");
	else if(totalTime < (9*60+43+11*60+19)/2)
	printf("Closest time is 9:43");
	else if(totalTime < (11*60+19+12*60+47)/2)
	printf("Closest time is 11:19");
	else if(totalTime < (12*60+47+2*60)/2)
	printf("Closest time is 12:47");
	else 
	printf("closest time is 2:00");
	return 0;
}
