#include<stdio.h>
int main()
{
	int i, a, b, x=0;
	
	while(1)
	{
		scanf("%d %d", &a, &b);
		if(a<=0 || b<=0)
		{
			break;
		}
		else
		{
			x=0;
			if(a<b)
			{
				for(i=a; i<=b; i++)
				{
					printf("%d ", a);
					a++;
					x+=i;
				}
					printf("Sum=%d\n", x);
			}
			else if(a>b)
			{
				for(i=b; i<=a; i++)
				{
					printf("%d ", b);
					b++;
					x+=i;
				}
					printf("Sum=%d\n", x);
			}
				
		}
	}
	
	return 0;
}
