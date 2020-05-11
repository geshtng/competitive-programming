#include<stdio.h>
#include<string.h>
int main()
{
	int i, n;
	char ch[6];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", &ch);
		if(strlen(ch)==5){
			printf("3\n");
		}
		else if((ch[0]=='t' && ch[1]=='w') || (ch[0]=='t' && ch[2]=='o') || (ch[1]=='w' && ch[2]=='o')){
			printf("2\n");
		}
		else {
			printf("1\n");
		}
	}
	
	return 0;
}
