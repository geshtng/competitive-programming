#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int i, n, length;
	char ch[100];
	
	cin>>n;
	for(i=0; i<n; i++){
		scanf("%s", ch);
		getchar();
		length = strlen(ch);
		printf((length>25)?"N\n":"Y\n");
	}
	
	return 0;
}
