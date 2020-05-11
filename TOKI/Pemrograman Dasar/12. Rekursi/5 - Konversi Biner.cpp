#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void bin(ll a){
	if(a==0) return;
	bin(a/2);
	cout<<a%2;
}

int main(){
	ll a;
	
	cin>>a;
	bin(a);
	cout<<endl;
	
	return 0;
}

