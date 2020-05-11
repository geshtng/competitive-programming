#include<stdio.h>
int main(){
	int a, b, b1, c, d;
	scanf("%d",&a);
	
		b = a / 365;
		b1 = a % 365;
		c = b1 / 30;
		d = b1 % 30;
	
	printf("%d ano(s)\n",b);
	printf("%d mes(es)\n",c);
	printf("%d dia(s)\n",d);
	
	return 0;
}
