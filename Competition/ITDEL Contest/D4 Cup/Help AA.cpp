#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i, n, j, k=0;
	scanf("%d", &n);
	if(n==0){
		printf("Aa ku luar biasa.\n");
	} else {
		for(i=0; i<n; i++){
			for(j=0; j<=i; j++){
				if(k==10){
					k=0;
				}
				printf("%d", k++);
			}
			printf("\n");
		}
	}
	
	return 0;
}
