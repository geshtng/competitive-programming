#include<stdio.h>
#include<string.h>
int main()
{
	int n, i;
	float x;
	char ch[10100];
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		scanf("%s", &ch);
		x = strlen(ch);
		printf("%.2f\n", x*.01);
	}
	
	return 0;
}
