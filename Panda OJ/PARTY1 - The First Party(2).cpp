#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

vector<int>sieve(int n){
	bool elim[n+1];
	vector<int>vec;
	
	memset(elim, true, sizeof(elim));
	int j;
	
	for(int i=2; i*i<=n; i++){
		if(elim[i]){
			for(int j=i*2; j<=n; j+=i){
				elim[j] = false;
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		if(elim[i])
			vec.pb(i);
	}
	
	return vec;
}

int main(){
	int t, x;
	vector<int>vec;
	
	cin>>t;
	while(t--){
		cin>>x;
		vec = sieve(x);
		for(int i=0; i<vec.size(); i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

