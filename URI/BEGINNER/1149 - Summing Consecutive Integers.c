#include<stdio.h>
int main()
{
	int A, N, i, X=0;
	scanf("%d", &A);
	while(1)
	{
		scanf("%d", &N);
		if(N>0)
		{
			break;
		}
	}
	
	for(i=1; i<=N; i++)
	{
		X+=A;
		A++;
	}
	printf("%d\n", X);
	
	return 0;
}
