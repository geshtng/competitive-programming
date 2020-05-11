#include<stdio.h>
int main()
{
	int n, i;
	char x;
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%s", &x);
	}
	if(n%3==0 && n%2==1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	
	return 0;
}
