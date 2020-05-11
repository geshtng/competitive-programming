#include<bits/stdc++.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	char ch[1000];
	scanf("%[^\n]%*c", ch);
	if(isdigit(ch[0]))
		cout<<"Halo Dunia"<<endl;
	else
		cout<<"Halo "<<ch<<endl;
	
	return 0;
}
