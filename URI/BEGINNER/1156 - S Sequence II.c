#include<stdio.h>
int main()
{
	double i, S=0, x, y=1;
	for(i=1; i<=39; i+=2)
	{
		x=i/y;
		S+=x;
		y*=2;
	}
	printf("%.2lf\n", S);
	
	return 0;
}
