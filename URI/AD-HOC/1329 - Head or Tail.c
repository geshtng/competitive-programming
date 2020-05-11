#include<stdio.h>
int main()
{
	int i, n, z;
	int m=0, j=0;
	
	while(1)
	{
		scanf("%d", &n);
		if(n!=0)
		{
			for(i=1; i<=n; i++)
			{
				scanf("%d", &z);
				if(z==0)
				{
					m+=1;
				}
				else if(z==1)
				{
					j+=1;
				}
			}
		}
		else
		{
			break;
		}
		
		printf("Mary won %d times and John won %d times\n", m, j);
		m=0;
		j=0;
	}
	
	return 0;
}
