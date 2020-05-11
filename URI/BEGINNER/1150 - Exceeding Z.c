#include<stdio.h>
int main()
{
	int X, Z;
	int i, c=0;
	scanf("%d", &X);
	while(1)
	{
		scanf("%d", &Z);
		if(X<Z)
		{
			break;
		}
	}
	
	for(i=X; i<=Z; X++, i+=X)
	{	
		c++;
	}
	printf("%d\n", c+1);
	
	return 0;
}
