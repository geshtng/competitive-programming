#include<stdio.h>
int main()
{
	int a, c, y=0;
	float x=0;
	while(1)
	{
		scanf("%d", &a);
		if(a<0)
		{
			break;
		}
		else
		{
			y+=a;
			c++;
		}
		x=(float)y/c;
	}
	
	printf("%.2f\n", x);
	
	return 0;
}
