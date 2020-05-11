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
bool ispa(string n){
	ll i =0;
	ll j = sz(n)-1;
	bool b =true;
	while(i<j){
		if(n[i]!=n[j]){
			b = false;
			break;
		}
		i++;
		j--;
	}
	if(b)return true;
	else return false;
}
void SOL(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	string a;
	cin>>a;
	ll op = 0;
	if(ispa(a)){
		if(sz(a)%2!=0){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}
	else{
	for(ll i=0,j=sz(a)-1;i<sz(a)/2,j>=sz(a)-(sz(a)/2);i++,j--){
		if(a[i]!=a[j]){
			op++;
		}
//		cout<<a[i]<<" "<<a[j]<<endl;
//		cout<<op<<endl;
		if(op==2){
			cout<<"NO"<<endl;
			exit(0);
		}
	}
	cout<<"YES"<<endl;
	}
}
int main(){
//author Vicky Andreas(vandreas)
//Student at IT DEL since 2015
SOL();
return 0;
}





