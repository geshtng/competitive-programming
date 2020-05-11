#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t,i=1;
	ll n;
	
	cin>>t;
	while(t--){
		cin>>n;
		ll tri, edges;
		
		tri = n-2;
		edges = n-3;
		
		cout<<"Case #"<<i<<": "<<tri<<" triangle(s) with "<<edges+n<<" edges."<<endl;
		
		i++;
	}
	
	return 0;
}

