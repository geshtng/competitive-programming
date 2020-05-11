#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;
typedef deque<int>di;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	ll t;
	
	cin>>t;
	ll ot[t+1], ma[t+1];
	for(ll i=0; i<t; i++){
		ll z;
		cin>>z;
		ot[i] = z;
		
		ll maks = 0;
		for(ll j=0; j<z; j++){
			ll x;
			cin>>x;
			if(x>maks){
				maks = x;
			}
		}
		ma[i] = maks;
	}
	
	ll MAKS = *max_element(ma, ma+t);
	ll ans=0;

	for(ll i=0; i<t; i++){
		ans += (MAKS-ma[i]) * ot[i];
	}
	cout<<ans<<endl;

	return 0;
}

