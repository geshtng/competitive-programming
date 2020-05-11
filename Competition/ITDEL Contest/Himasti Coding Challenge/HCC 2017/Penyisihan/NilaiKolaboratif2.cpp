#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll n,p,q,r,x,ans=0;
	vector<ll>a;
	
	cin>>n>>p>>q>>r;
	
	ll dp[n][2];
	memset(dp,-1e9,sizeof(dp));
	
	for(ll i=0; i<n; i++){
		cin>>x;
		a.push_back(x);
	}

	for(ll i=0; i<a.size(); i++){
		dp[i][0] = max(dp[i][0], p*a[i]);
		dp[i][1] = max(dp[i][1], dp[i][0] + q*a[i]);
		dp[i][2] = max(dp[i][2], dp[i][1] + r*a[i]);
	}
	
	ans = dp[a.size()-1][2];
	cout<<ans<<endl;
	
	
	
	return 0;
}
