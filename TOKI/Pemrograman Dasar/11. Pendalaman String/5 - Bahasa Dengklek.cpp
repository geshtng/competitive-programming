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
	string str;
	string ans="";
	
	cin>>str;
	for(int i=0; i<str.size(); i++){
		if(isupper(str[i])){
			ans += tolower(str[i]);
		} else {
			ans += toupper(str[i]);
		}
	}
	cout<<ans<<endl;

	return 0;
}

