#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	ll t;
	ll a,b,n,m;
	
	cin>>t;
	while(t--){
		cin>>a>>b>>n>>m;
		ll ans=0;
		for(ll i=a; i<=b; i++){
			if(i%n==0 && i%m!=0){
				ans+=i;
			}
		}
		cout<<ans<<endl;
	}

	return 0;
}

