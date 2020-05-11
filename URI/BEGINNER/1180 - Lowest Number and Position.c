#include<stdio.h>
int main()
{
	int n, i, z;
	int e=0, x=0, d=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &z);
		if(z<d)
		{
			e=x;
			d=z;
		}
		x++;
	}
	printf("Menor valor: %d\n",d);
    printf("Posicao: %d\n",e);
	
	return 0;
}
