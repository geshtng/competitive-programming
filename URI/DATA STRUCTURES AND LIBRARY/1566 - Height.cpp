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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n;
	
	cin>>t;
	for(int it=0; it<t; it++){
		cin>>n;
		vi vec(n);
		for(int i=0; i<n; i++)
			cin>>vec[i];
		
		sort(vec.begin(), vec.end());
		
		for(int i=0; i<vec.size(); i++){
			cout<<vec[i];
			if(i != vec.size()-1)
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}

