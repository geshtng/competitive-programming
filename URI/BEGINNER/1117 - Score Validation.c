#include<stdio.h>
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
	
	return 0;
}
