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
	string str;
	
	while(getline(cin,str)){
		int ans=0, hue=0;
		for(int i=0; i<str.size(); i++){
			if(isalpha(str[i])){
				hue = 1;
			} else {
				ans += hue;
				hue = 0;
			}
		}
		ans += hue;
		cout<<ans<<endl;
	}

	return 0;
}

