#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n;
	char ch[120];
	
	scanf("%LE",&n);
	sprintf(ch,"%LE", n);
	if(ch[0]!='-') cout<<"+";
	
	printf("%.4LE\n",n);
	
	return 0;
}
