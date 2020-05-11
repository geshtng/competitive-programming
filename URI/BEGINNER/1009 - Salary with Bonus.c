#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	double a, b;
	scanf("%s", name);
	scanf(" %lf %lf",&a, &b);
	printf("TOTAL = R$ %.2lf\n", a+(0.15*b));
	
	return 0;
}
