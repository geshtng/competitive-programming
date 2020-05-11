#include<stdio.h>
int main(){
	int a, a1, b, b1, c, c1, d, d1, e, e1, f, f1, g, g1, N;
	scanf("%d",&N);
	printf("%d\n",N);
	a = N / 100;
	a1 = N % 100;
	printf("%d nota(s) de R$ 100,00\n",a);
	
	b = a1 / 50;
	b1 = a1 % 50;
	printf("%d nota(s) de R$ 50,00\n",b);
	
	c = b1 / 20;
	c1 = b1 % 20;
	printf("%d nota(s) de R$ 20,00\n",c);
	
	d = c1 / 10;
	d1 = c1 % 10;
	printf("%d nota(s) de R$ 10,00\n",d);
	
	e = d1 / 5;
	e1 = d1 % 5;
	printf("%d nota(s) de R$ 5,00\n",e);
	
	f = e1 / 2;
	f1 = e1 % 2;
	printf("%d nota(s) de R$ 2,00\n",f);
	
	g = f1 / 1;
	g1 = f1 % 1;
	printf("%d nota(s) de R$ 1,00\n",g);
	
	return 0;
}
