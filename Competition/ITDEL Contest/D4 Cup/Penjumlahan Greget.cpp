#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, i;
	long int x, y, t;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%ld %ld", &x, &y);
		if(x+y<0){
			t=0;
		} else {
			t=x+y;
		}
		printf("%ld\n", t);
	}
	
	return 0;
}
