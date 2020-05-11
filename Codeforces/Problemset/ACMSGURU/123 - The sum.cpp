#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll fib(ll n){
    ll dp[n+2];

    dp[0] = 0;
    dp[1] = 1;

    for(ll i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

int main(){
    ll n;
	ll ans=0;
    cin>>n;
    for(int i=0; i<=n; i++){
    	ans += fib(i);
	}
    cout<<ans<<endl;

    return 0;
}
