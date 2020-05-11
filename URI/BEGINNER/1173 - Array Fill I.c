#include<stdio.h>
int main()
{
	int i, x, y=0;
	scanf("%d", &x);
	for(i=1; i<=10; i++)
	{
		printf("N[%d] = %d\n", y, x);
		x*=2;
		y++;
	}
	
	return 0;
}
