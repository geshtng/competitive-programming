#include<stdio.h>
#include<ctype.h>
int main(){
	int n, i, x, y;
	char ch;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d %c %d", &x, &ch, &y);
		if(x>=0 && x<=9 && y>=0 && y<=9)
		{
			if(x==y)
			{
				printf("%d\n",x*y);
			}
			else if(islower(ch))
			{
				printf("%d\n",x+y);
			}
			else if(isupper(ch))
			{
				printf("%d\n",y-x);
			}
		}
	}
	
	return 0;
}
