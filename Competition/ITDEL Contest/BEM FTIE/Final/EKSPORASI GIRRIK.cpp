#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i, n, sum=0;
	long int x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%ld", &x);
		sum=0;
		if(x%3==0 || x%5==0){
			sum+=x;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
