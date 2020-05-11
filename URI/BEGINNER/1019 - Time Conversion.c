#include<stdio.h>
int main(){
	int a, a1, b, c, N;
	scanf("%d",&N);
	
	a = N / 3600;
	a1 = N % 3600;
	b = a1 / 60;
	c = a1 % 60;
	printf("%d:%d:%d\n",a, b, c);
	
	return 0;
}
