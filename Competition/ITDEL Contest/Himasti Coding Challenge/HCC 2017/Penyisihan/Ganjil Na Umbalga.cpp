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
// important :))
const int kk = 1e5+10;
int sum[kk];
void SOL(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll n;
	cin>>n;
	vll v;
	for(ll i=0;i<n;i++){
		ll q;
		cin>>q;
		v.pb(q);
	}
	sort(all(v));
	int c = 0;
	int j=0;
	for(ll i=sz(v)-1;i>=0;i--){
		c += v[i];
		sum[j] = c;
		j++; 
	}
	ll ki = -1e18;
	for(ll i=0;i<j;i++){
		if(sum[i]> ki && sum[i] % 2 !=0){
			ki = sum[i];
		}
	}
	cout<<ki<<endl;
}
int main(){
//author Vicky Andreas(vandreas)
//Student at IT DEL since 2015
SOL();
return 0;
}





