#include<stdio.h>
#include<string.h>
int main()
{
	int a, n, i;
	char ch[10];
	int sum;
	
	scanf("%d %d", &a, &n);
	sum = a;
	
	for(i=0; i<n; i++)
	{
		scanf("%s", ch);
		if(ch[0]=='f'){
			sum++;
		}
		else{
			sum--;
		}
		
	}
	printf("%d\n", sum);
	
	return 0;
}
