#include<stdio.h>
int main()
{
	double i, S=0, x;
	for(i=1; i<=100; i++)
	{
		x=1/i;
		S+=x;
	}
	printf("%.2lf\n", S);
	
	return 0;
}
