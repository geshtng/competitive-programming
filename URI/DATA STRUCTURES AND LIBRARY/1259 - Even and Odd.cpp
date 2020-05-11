#include<bits/stdc++.h>

#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

typedef long long int ll;
typedef vector<int>  vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t,x;
	vi vec;
	
	cin>>t;
	while(t--){
		cin>>x;
		vec.push_back(x);
	}
	
	sort(all(vec));
	for(int i=0; i<vec.size(); i++){
		if(vec[i]%2 == 0){
			cout<<vec[i]<<endl;
		}
	}
	for(int i=vec.size()-1; i>=0; i--){
		if(vec[i]%2!=0){
			cout<<vec[i]<<endl;
		}
	}
	

	return 0;
}

