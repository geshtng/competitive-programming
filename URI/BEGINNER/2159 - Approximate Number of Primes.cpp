#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,x,y;
	cin>>n;
	x = n/log(n);
	y = (1.25506)*(n/log(n));
	printf("%.1lf %.1lf\n", x, y);
	
	return 0;
}
