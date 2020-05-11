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
	int n,q,x,y;
	vi vec, qu;
	vi::iterator it;
	int ite=1;
	
	while(cin>>n>>q){
		if(n==0 && q==0) break;
		
		for(int i=0; i<n; i++){
			cin>>x;
			vec.pb(x);
		}
		
		sort(vec.begin(), vec.end());
		for(int i=0; i<q; i++){
			cin>>y;
			qu.pb(y);
		}
		
		cout<<"CASE# "<<ite<<":"<<endl;
		for(int i=0; i<q; i++){
			it = find(vec.begin(), vec.end(), qu[i]);
			(it==vec.end()) ? cout<<qu[i]<<" not found"<<endl : cout<<qu[i]<<" found at "<<distance(vec.begin(), it)+1<<endl;
		}
		ite++;
		vec.clear();
		qu.clear();
	}

	return 0;
}

