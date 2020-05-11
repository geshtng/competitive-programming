#include<stdio.h>
int main()
{
	double n;
	int a, a1, b, b1, c, c1, d, d1, e, e1, f, f1, x;
	scanf("%lf", &n);
	
	x = n;
	
	a  = x / 100;
	a1 = x % 100;
	b  = a1 / 50;
	b1 = a1 % 50;
	c  = b1 / 20;
	c1 = b1 % 20;
	d  = c1 / 10;
	d1 = c1 % 10;
	e  = d1 / 5;
	e1 = d1 % 5;
	f  = e1 / 2;
	f1 = e1 % 2; 
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",a);
	printf("%d nota(s) de R$ 50.00\n", b);
	printf("%d nota(s) de R$ 20.00\n", c);
	printf("%d nota(s) de R$ 10.00\n", d);
	printf("%d nota(s) de R$ 5.00\n", e);
	printf("%d nota(s) de R$ 2.00\n", f);
	
	int g1, h1, i1, j1, k1;
	int g, h, i, j, k, l, X, Y;
	
	X = n * 100;
	Y = (int) X;
	
	g  = f1 / 1;
	g1 = Y % 100;
	h  = g1 / 50;
	h1 = g1 % 50;
	i  = h1 / 25;
	i1 = h1 % 25;
	j  = i1 / 10;
	j1 = i1 % 10;
	k  = j1 / 5;
	k1 = j1 % 5;
	l  = k1 / 1;
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", g);
	printf("%d moeda(s) de R$ 0.50\n", h);
	printf("%d moeda(s) de R$ 0.25\n", i);
	printf("%d moeda(s) de R$ 0.10\n", j);
	printf("%d moeda(s) de R$ 0.05\n", k);
	printf("%d moeda(s) de R$ 0.01\n", l);
	
	return 0;
}
