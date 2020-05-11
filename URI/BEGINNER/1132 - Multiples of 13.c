#include<stdio.h>
int main()
{
	int i, a, b, y=0;
	scanf("%d %d", &a, &b);
	
	if(a<b)
	{
		for(i=a; i<=b; i++)
		{
			if(i % 13 != 0)
			{
				y+=i;
			}
		}
	}
	else if(a>b)
	{
		for(i=b; i<=a; i++)
		{
			if(i % 13 != 0)
			{
				y+=i;
			}
		}
	}
	
	printf("%d\n", y);
	
	return 0;
}
