#include<stdio.h>
int main()
{
	int n, i, sum=0, x;
	scanf("%d", &n);
	for(i=1; i<=5; i++)
	{
		scanf("%d", &x);
		if(x==n)
		{
			sum++;
		}
	}
	printf("%d\n", sum);
	
	return 0;
}
