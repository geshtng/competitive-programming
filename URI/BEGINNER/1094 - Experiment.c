#include<stdio.h>
int main()
{
	int n, i, a, j;
	int sum=0;
	int sum_c=0, sum_r=0, sum_s=0;
	float per_c, per_r, per_s;
	char S[10];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &a);
		scanf("%s", &S);
		sum+=a;
		if(S[0]=='C')
		{
			sum_c+=a;
		}
		else if(S[0]=='R')
		{
			sum_r+=a;
		}
		else if(S[0]=='S')
		{
			sum_s+=a;
		}
	}
	
	per_c = (float)(sum_c*100)/sum;
	per_r = (float)(sum_r*100)/sum;
	per_s = (float)(sum_s*100)/sum;
	
	printf("Total: %d cobaias\n", sum);
	printf("Total de coelhos: %d\n", sum_c);
	printf("Total de ratos: %d\n", sum_r);
	printf("Total de sapos: %d\n", sum_s);
	printf("Percentual de coelhos: %.2f %%\n", per_c);
	printf("Percentual de ratos: %.2f %%\n", per_r);
	printf("Percentual de sapos: %.2f %%\n", per_s);
	
	return 0;
}
