#include<bits/stdc++.h>
using namespace std;

long long sum(long long x){
	return ((x+1) * (x)) >> 1;
}

int main()
{
	long long a,b;
	
	while(cin>>a>>b){
		cout<<sum(b)-sum(a-1)<<endl;
	}
	return 0;
}
