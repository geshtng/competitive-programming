#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int i, n, x, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		sum = (pow(x,3)) - (pow(x-2,3));
		printf("%d\n", sum);
	}
	
	return 0;
}
