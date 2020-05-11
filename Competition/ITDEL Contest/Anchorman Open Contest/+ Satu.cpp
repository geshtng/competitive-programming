#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int n;
	int i, j;
	int* array = new int[1000000];
	int* baru = new int[1000000];
	int sum=0;
	
	scanf("%ld", &n);
	for(i=0; i<n; i++){
		scanf("%d", &array[i]);
		baru[i] = array[i]+1;
	}
	for(j=0; j<n; j++){
		if(array[j+1] == baru[j]){
			sum++;
		}
	}
	printf("%d\n", sum);	
	
	return 0;
}
