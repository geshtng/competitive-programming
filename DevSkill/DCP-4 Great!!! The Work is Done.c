#include<stdio.h>
int main()
{
	int a, b, x, sum=0;
	int i, y=1;
	while((scanf("%d %d", &a, &b)) != EOF)
	{
		for(i=1; i<=b; i++)
		{
			scanf("%d", &x);
			sum += x;
		}
		
		if(sum>=a)
		{
			printf("Project will finish within 1 day.\n");
		}
		else if(sum<a)
		{
			for(i=sum; i<a; i+=sum)
			{
				y++;
			}
			printf("Project will finish within %d days.\n", y);
		}
		y=1;
		sum=0;
	}
	return 0;
}
