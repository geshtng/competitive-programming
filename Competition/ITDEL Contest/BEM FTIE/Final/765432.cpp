#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int i,n,x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		if(x==0){
			printf("Case #%d = 1\n", i+1);
		}
		else if(x%2==0){
			if((x/2)%2 != 0){
				printf("Case #%d = 4\n", i+1);
			}
			else
			{
				printf("Case #%d = 6\n", i+1);
			}
		}
		else{
			if((x/2)%2 == 0){
				printf("Case #%d = 2\n", i+1);
			}
			else{
				printf("Case #%d = 8\n", i+1);
			}
		}
	}
	
	return 0;
}
