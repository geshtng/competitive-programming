#include<stdio.h>
int main()
{
	int L, R;
	while(1)
	{
		scanf("%d %d", &L, &R);
		if(L!=0 && R!=0)
		{
			if(L>5 && R>5)
			{
				break;
			}
			else
			{
				printf("%d\n", L+R);
			}
		}
		else
		{
			break;
		}
	}
	
	return 0;
}
