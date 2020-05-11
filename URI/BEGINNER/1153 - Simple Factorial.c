#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d", &a);
	b=1;
	c=a;
	
	while(c>0)
	{
		b = b * c;
		c--;
	}
	printf("%d\n", b);
	return 0;
}
