#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t;
	string a,b;
	
	cin>>t;
	for(int it=1; it<=t; it++){
		cin>>a>>b;
		ll x=0, y=0;
		for(int i=0; i<a.size(); i++){
			x += a[i] - '0';
		}	
		for(int i=0; i<b.size(); i++){
			y += b[i] - '0';
		}
		printf("Case #%d: ", it);
		cout<<x*y<<endl;
	}

	return 0;
}

