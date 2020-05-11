#include<stdio.h>
int main()
{
	int a, i, x=0;
	for(i=1; i<=5; i++)
	{
		scanf("%d", &a);
		if(a%2==0)
		x+=1;
	}
		printf("%d valores pares\n", x);
	
	return 0;
}
