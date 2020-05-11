#include<stdio.h>
int main()
{
	int N, i, X, Y, Z, j, sum=0;
	scanf("%d", &N);
	for(i=1; i<=N; i++)
	{
		scanf("%d %d", &X, &Y);
		if(X%2==0)
		{
			Z = X+1;
			for(j=1; j<=Y; j++)
			{
				sum+=Z;
				Z+=2;
			}
			printf("%d\n", sum);
		}
		else if(X%2==1 || X%2==-1)
		{
			for(j=1; j<=Y; j++)
			{
				sum+=X;
				X+=2;
			}
			printf("%d\n", sum);
		}
		sum=0;
	}
	
	return 0;
}
