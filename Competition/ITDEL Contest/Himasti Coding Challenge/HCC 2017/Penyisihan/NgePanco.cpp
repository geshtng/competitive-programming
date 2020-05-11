#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define sz(x) x.size()
typedef unsigned  long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<ll> vll;
typedef vector<ull> vull;
void SOL(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll max = (ll)(-1e18);
		ll pos ;
		for(ll i=0;i<pow(2,n);i++){
			ll p;
			cin>>p;
			if(p > max){
				max = p;
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}
}
int main(){
//author Vicky Andreas(vandreas)
//Student at IT DEL since 2015
SOL();
return 0;
}





