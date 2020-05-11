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
typedef pair<ll,ll>pll;

const int N = 1e5;
const int MOD = 1e9 + 7;

int n,d;

int power(int a, int b){
	int total = 1;
	for(int i=0; i<b; i++){
		total *= a;
	}
	
	return total;
}

int func(pll a, pll b){
	int temp;
	temp = power(abs(b.first-a.first), d) + power(abs(b.second-a.second), d);
	
	return temp;
}

int main(){
	ll x,y;
	
	vector<pll>data;
	int mins = INT_MAX, maks=INT_MIN, temp;
	
	cin>>n>>d;
	for(int i=0; i<n; i++){
		cin>>x>>y;
		data.pb(mp(x,y));
	}
	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(i!=j){
				temp = func(data[i], data[j]);
				if(temp < mins) mins = temp;
				if(temp > maks) maks = temp;
			}
		}
	}
	
	cout<<mins<<" "<<maks<<endl;
	
	
	return 0;
}

