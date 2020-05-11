#include<stdio.h>
int main()
{
	long long int a, b;
	unsigned long long int t;
	scanf("%lld %lld", &a, &b);
	if((a+b)<0){
		t=0;
	}
	else{
		t=a+b;
	}
	printf("%lld\n", t);
	
	return 0;
}
