#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	int n,m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		double ans=log10(n);
		ans *= m;
		cout<<floor(ans)+1<<endl;
	}
	
	return 0;
}

