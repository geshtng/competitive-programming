#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	char ch[10001];
	int len, sum=0, i, j;
	scanf("%s", ch);
	len = strlen(ch);
	for(i=0; i<len; i++){
		sum=0;
		for(j=i; j<len; j++){
			if(ch[j]%2==0){
				sum++;
			}
		}
		printf("%d ", sum);
	}
	printf("\n");
	
	return 0;
}
