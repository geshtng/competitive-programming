#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, i, x, z, j, sum=0, mem;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		for(j=0; j<x; j++){
			scanf("%d", &z);
			sum+=z;
		}
		if(sum<=16000){
			mem=16;
		}
		else if(sum<=32000){
			mem=32;
		}
		else if(sum<=64000){
			mem=64;
		}
		else if(sum<=128000){
			mem=128;
		}
		printf("Case #%d: %dGB\n", i+1, mem);
		sum=0;
	}
	
	return 0;
}
