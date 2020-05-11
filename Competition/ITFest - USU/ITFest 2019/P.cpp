#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sol(ll n){
	if(n%2==0)
		return n/2;
	else
		return n;
}

int main(){
	ll n;
	
	cin>>n;
	cout<<sol(n+1)<<endl;

	return 0;
}

