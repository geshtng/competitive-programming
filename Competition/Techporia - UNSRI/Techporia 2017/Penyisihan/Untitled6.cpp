#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,t=10;
	char c;
	while(t--){
		scanf("%d %d",&a,&b);
		while(getchar()!=' ');
		scanf("%c",&c);
		printf("c = %c\n a = %d\n b = %d\n",c,a,b);
	}

	return 0;
}

