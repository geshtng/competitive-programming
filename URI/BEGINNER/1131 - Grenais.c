#include<stdio.h>
int main()
{
	int a, b, x, z=0;
	int a1=0, b1=0, c1=0;
	
	while(1)
	{
		z++;
		scanf("%d %d", &a, &b);
		if(a>b)
		{
			a1++;
		}
		else if(b>a)
		{
			b1++;
		}
		else if(a==b)
		{
			c1++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &x);
			if(x==1)
			{
				continue;
			}
			else if(x==2)
			{
				printf("%d grenais\n", z);
				printf("Inter:%d\n", a1);
				printf("Gremio:%d\n", b1);
				printf("Empates:%d\n", c1);
				if(a1>b1)
				{
					printf("Inter venceu mais\n");
				}
				else if(b1>a1)
				{
					printf("Gremio venceu mais\n");
				}
				else if(a1==b1)
				{
					printf("Nao houve vencedor\n");
				}
			}
		break;
	}

	return 0;
}
