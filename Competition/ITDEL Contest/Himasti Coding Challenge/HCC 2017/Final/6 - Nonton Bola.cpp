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
typedef vector<pair<ll, ll> > vpll;
// deklarasi array 1e5+10
const ll maxk = (ll)(1e5+10);
ll arr[maxk];
// important :))

void SOL(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	ll a;
	cin>>a;
	vs v,idx;
	for(ll i=0;i<a;i++){
		string s;
		cin>>s;
		v.pb(s);
		if(find(all(idx), s)==idx.end()){
			idx.pb(s);
		}
	}
	int ans = INT_MIN;
	string pos;
	
	for(ll i=0;i<sz(idx);i++){
		if(count(all(v), idx[i]) > ans){
			ans = count(all(v), idx[i]);
			pos = idx[i];	
		}
	}
	cout<<pos<<endl;
}
int main(){
	//author tarit0
	//Himasti coding challenge 2017
SOL();
return 0;
}






