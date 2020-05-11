#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y,area,altura,r;
	double phi=3.14;

	while(scanf("%lf %lf", &x, &y) !=EOF){
		r = y/2;
		area = phi*r*r;
		altura = x/area;
		printf("ALTURA = %.2lf\n", altura);
		printf("AREA = %.2lf\n", area);
	}
	
	
	return 0;
}
