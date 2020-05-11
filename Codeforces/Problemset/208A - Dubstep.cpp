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
	bool test = true;
	
	cin>>str;
	for(int i=0, k=0; i<str.size(); i++){
		if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
			i+=2;
			if(!test){
				cout<<" ";
			}
			continue;
		} else {
			test = false;
			cout<<str[i];
		}
	}
	
	return 0;
}

