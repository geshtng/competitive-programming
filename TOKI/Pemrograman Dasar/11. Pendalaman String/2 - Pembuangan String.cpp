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
	string a,b;
	
	cin>>a>>b;
	for(int i=0; i<a.size(); i++){
		for(int j=0; j<a.size(); j++){
			if(a.substr(j, b.size()) == b){
				a.erase(j, b.size());
			}
		}
	}
	
	cout<<a<<endl;

	return 0;
}

