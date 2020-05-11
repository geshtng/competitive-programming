#include<stdio.h>
int main()
{
	int n, i, x, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &x);
		if(x>=10 && x<=20)
		{
			sum++;
		}
	}
	printf("%d in\n", sum);
	printf("%d out\n", n-sum);
	
	return 0;
}
