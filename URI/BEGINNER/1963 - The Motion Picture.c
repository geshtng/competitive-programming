#include<stdio.h>
int main()
{
	double a, b, formula;
	scanf("%lf %lf", &a, &b);
	formula = ((b-a)*100.00)/a;
	printf("%.2lf%%\n", formula);
	return 0;
}
