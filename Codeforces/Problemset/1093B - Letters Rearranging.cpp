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
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		string s;
		cin>>s;
		sort(s.begin(), s.end());
		if(s[0] == s.back())
			cout<<"-1"<<endl;
		else
			cout<<s<<endl;	
	
	}

	return 0;
}

