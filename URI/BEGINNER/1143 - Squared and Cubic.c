#include<stdio.h>
int main()
{
	int i, j, n;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=1; j++)
		{
			printf("%d ", i);
		}
		for(j=1; j<=1; j++)
		{
			printf("%d ", i*i);
		}
		for(j=1; j<=1; j++)
		{
			printf("%d\n", i*i*i);
		}
	}

	return 0;
}
