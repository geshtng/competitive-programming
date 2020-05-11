#include<stdio.h>
int main()
{
	int num, n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%d", &num);

		if(num>0 && num%2==0)
			printf("EVEN POSITIVE\n");
		else if(num>0 && num%2==1)
			printf("ODD POSITIVE\n");
		else if(num==0)
			printf("NULL\n");
		else if(num<0 && num%2==0)
			printf("EVEN NEGATIVE\n");
		else if(num<0 && num%2==-1)
			printf("ODD NEGATIVE\n");
	}
	return 0;
}
