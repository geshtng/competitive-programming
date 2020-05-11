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
typedef deque<int>di;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int n, k, x;
	ll sum, ans;
	vi vec;
	
	while(cin>>n>>k){
		ll arr[n+5];
		memset(arr,0,sizeof(arr));
//		fill(vec.begin(), vec.end(), 0);
		sum=0;
		for(int i=0; i<n; i++){
			cin>>arr[i];
//			vec.pb(x);
		}
		
//		sort(vec.begin(), vec.end(), greater<int>());
		sort(arr,arr+n, greater<int>());
		for(int i=0; i<k; i++){
			sum+=arr[i];
		}
		ans = sum%MOD;
		
		cout<<ans<<endl;
		vec.clear();
	}

	return 0;
}

