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

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t, x;
	ll ans;
	
	cin>>t;
	for(int it=0; it<t; it++){
		cin>>x;
		ans = 0;
		for(int i=1; i<=x; i++){
			ans += pow(i,3);
		}
		printf("Case %d: ", it+1);
		cout<<ans<<endl;
	}

	return 0;
}

