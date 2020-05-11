#include<stdio.h>
int main()
{
	int i, n, x, y;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &x, &y);
		printf("%d\n", max(x,y));
	}
	
	return 0;
}

int max(int x, int y)
{
	if((y-x)==1)
	{
		return (y&x);
	}
	else if(!(y&1))
	{
  		return ((y-1)&(y-2));
 	}
	else
	{
	  return (y&(y-1));
	}
}
