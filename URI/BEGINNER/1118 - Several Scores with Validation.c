#include<stdio.h>
#include<stdlib.h>
int main()
{
	double a, x, c=0, d=0;
	while(1)
	{
		if(d==2)
		break;
		scanf("%lf", &a);
		if(a>=0 && a<=10)
		{
			d++;
			c+=a;
		}
		else
		{
			printf("nota invalida\n");
		}
	}
	
	x = c/2;
	printf("media = %.2lf\n", x);
	repeat();
	
	return 0;
}

repeat()
{
	int ch;
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d", &ch);
	if(ch==1)
	{
		main();
	}
	else if(ch==2)
	{
		exit(0);
	}
	else
	{
		repeat();
	}
}
