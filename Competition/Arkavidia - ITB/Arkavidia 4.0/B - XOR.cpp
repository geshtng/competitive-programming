#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fun(ll n){
	switch(n % 4){
	    case 0: return n;     
	    case 1: return 1;     
	    case 2: return n + 1;     
	    case 3: return 0;     
    }
}

int main(){
	int t;
	ll l, r;
	
	cin>>t;
	while(t--){
		cin>>l>>r;
		printf("%lld\n", fun(r)^fun(l-1));
	}

	return 0;
}

