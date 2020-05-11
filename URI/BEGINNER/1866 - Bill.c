#include<stdio.h>
int main()
{
	int i, n, z=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &z);
		if(z%2!=0)
		{
			z=1;
		}
		else if(z%2==0)
		{
			z=0;
		}
		printf("%d\n", z);
	}
	
	return 0;
}
