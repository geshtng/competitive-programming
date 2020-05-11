#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, i, x, j, s, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		for(j=0; j<x; j++){
			scanf("%d", &s);
			if(s<60){
				sum++;
			}
		}
		printf("Case #%d: %d\n", i+1, sum);
		sum=0;
	}
	
	
	return 0;
}
