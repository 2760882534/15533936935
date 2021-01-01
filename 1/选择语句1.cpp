#include<stdio.h>
int main(void)
{
	int a, b;
	printf("Enter grade: ");
	scanf("%d", &a);
	b = a / 10;
	switch (b) {
		case 10:
		case 9: printf("Letter grade: A"); break;
		case 8: printf("Letter grade: B"); break;
		case 7: printf("Letter grade: C"); break;
		case 6: printf("Letter grade: D"); break;
		case 0: case 1: case 2: case 3: case 4: case 5:
		printf("Letter grade: F"); break;
	default: printf ("chucuo");
}
	return 0;
 } 
