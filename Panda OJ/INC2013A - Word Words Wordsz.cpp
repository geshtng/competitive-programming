#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(){
	int n, x, i, j, length;
	int A=0, B=0, C=0;
	char ch[20];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x);
		for(j=0; j<x; j++){
			scanf("%s", ch);
			length = strlen(ch);
			if(length==4){
				A++;
			}
			else if(length==5){
				B++;
			}
			else if(length==6){
				C++;
			}
		}
		printf("Case #%d: %d %d %d\n", i+1, A, B, C);
		A=0;
		B=0;
		C=0;
	}
	
	return 0;
}
