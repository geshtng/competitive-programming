#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
	#endif
	
	LL n,k;
	LL ans = 1e18;
	
	cin>>n>>k;
	for(int i=1; i<k; i++){
		if(n%i==0){
			ans = min(ans, n/i * k+i);
		}
	}
	
	cout<<ans<<endl;

	return 0;
}

