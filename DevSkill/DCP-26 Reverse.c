#include<stdio.h>
#include<string.h>
int main()
{
	int a,i,j,length;
	char ch[1001];
	scanf("%d", &a);
	getchar();
	for(i=0; i<a; i++)
	{
		scanf("%[^\n]%*c", ch);
		length = strlen(ch);
		for(j=length-1; j>=0; j--){
			printf("%c", ch[j]);
		}
		printf("\n");
	}
	
	return 0;
}
