#include<stdio.h>
int main(){
	int a, b;
	float e;
	scanf("%d %d %f\n",&a, &b, &e);
	int c, d;
	float f;
	scanf("%d %d %f", &c, &d, &f);
	printf("VALOR A PAGAR: R$ %.2f\n", (b*e)+(d*f));
	
	return 0;
}
