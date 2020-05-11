#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i, n;
	int x,y,z;
	scanf("%d", &n);
	if(n==0){
		printf("tidak ada hasil\n");
	} else {
		for(i=0; i<n; i++){
			scanf("%d %d %d", &x, &y, &z);
			printf("Case #%d: %d\n", i+1, (x+y)%z);
		}
	}
	
	return 0;
}
