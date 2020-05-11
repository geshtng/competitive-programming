#include<stdio.h>
int main()
{
	int i, n, a, b;
	float div;
	scanf("%d", &n);
	
		for(i=1; i<=n; i++)
		{
			scanf("%d %d", &a, &b);
			div = (float)a/b;
			
			if(b==0)
			{
				printf("divisao impossivel\n");
			}
			else if(a==0)
			{
				printf("0.0\n");
			}
			else
			{
				printf("%.1f\n", div);
			}
		}
		
	return 0;
}
