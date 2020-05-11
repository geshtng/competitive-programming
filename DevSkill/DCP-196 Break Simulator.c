#include<stdio.h>
int main()
{
	int i, n;
	double x, y;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%lf %lf", &x, &y);
		printf("%.2lf\n", -(x/y));
	}
	
	return 0;
}
