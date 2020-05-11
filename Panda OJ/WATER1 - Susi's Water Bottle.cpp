#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, i, x, j, k, sum=0;
	long int arr[9999], z;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &x);
		for(j=0; j<x; j++){
			scanf("%ld", &arr[j]);
		}
		scanf("%ld", &z);
		for(k=0; k<x; k++){
			if(arr[k]==z){
				sum++;
			}
		}
		if(sum!=0){
			printf("Kasus #%d: ADA %d BOTOL DITEMUKAN\n", i, sum);
		} else {
			printf("Kasus #%d: TIDAK ADA\n", i);
		}
		sum=0;
	}
	
	return 0;
}
