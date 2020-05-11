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
	int a,b,k,x;
	
	cin>>a>>b>>k>>x;
	int ans=x;
	for(int i=0; i<k; i++){
		ans = abs((a*ans)+b);
	}
	cout<<ans<<endl;
		
	return 0;
}

