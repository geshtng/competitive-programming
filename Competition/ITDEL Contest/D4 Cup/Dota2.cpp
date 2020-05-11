#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,x,y,z;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %d %d", &x, &y, &z);
		printf("Case #%d: %d %d\n", i+1, (x*19)+150, z*13);
	}
	
	return 0;
}
