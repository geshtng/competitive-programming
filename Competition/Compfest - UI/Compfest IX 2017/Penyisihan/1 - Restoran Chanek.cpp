#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m;
	unsigned long long int ans,x;
	
	cin>>t;
	while(t--){
		cin>>n>>m;
		ans = 0;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>x;
				ans+=x;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
