#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	ll n,p,q,r,x;
	vector<ll>vec;
	
	cin>>n>>p>>q>>r;
	for(ll i=0; i<n; i++){
		cin>>x;
		vec.pb(x);
	}
	
	ll dp[n][2];
	memset(dp, 0, sizeof(dp));
	
	dp[0][0] = max(dp[0][0], p*vec[0]);
	dp[0][1] = max(dp[0][1], dp[0][0] + (q*vec[0]));
	dp[0][2] = max(dp[0][2], dp[0][1] + (r*vec[0]));
	
	for(ll i=1; i<n; i++){
		dp[i][0] = max(dp[i-1][0], p*vec[i]);
		dp[i][1] = max(dp[i-1][1], (dp[i][0] + q*vec[i]));
		dp[i][2] = max(dp[i-1][2], (dp[i][1] + r*vec[i]));
	}
	
	cout<<dp[n-1][2]<<endl;
	
	return 0;
}

