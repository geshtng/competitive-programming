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
	
	int t, x;
	double z;
	
	while(cin>>t){
		double min = INT_MAX * 1.0;
		while(t--){
			cin>>z;
			if(z < min)
				min = z;
		}
		cout<<min<<endl;
	}

	return 0;
}

