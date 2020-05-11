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
	int x;
	vector<int>vec;
	for(int i=0; i<4; i++){
		cin>>x;
		vec.push_back(x);
	}
	for(int i=0; i<vec.size(); i++){
		if(vec[i]==1)
			cout<<i+1<<endl;
	}

	return 0;
}

