#include<stdio.h>
int main()
{
	int X, i, Y, sum=0;
	while(1)
	{
		scanf("%d", &X);
		if(X==0)
		{
			break;
		}
		else
		{
			if(X%2==0)
			{
				for(i=1; i<=5; i++)
				{
					sum+=X;
					X+=2;
				}
				printf("%d\n", sum);
			}
			else if(X%2==1 || X%2==-1)
			{
				Y = X+1;
				for(i=1; i<=5; i++)
				{
					sum+=Y;
					Y+=2;
				}
				printf("%d\n", sum);
			}
		}
		sum=0;
	}
	
	return 0;
}
