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
	int t, ct;
	string str;
	map<int, string, greater<int>>mp;
	vector<string>vec;
	
	while(cin>>t){
		for(int i=0; i<t; i++){
			cin>>str>>ct;
			mp.insert({ ct, str });
		}
		
		for(map<int, string>::iterator it=mp.begin(); it!=mp.end(); it++){
			vec.push_back(it->second);
		}
		//cout<<endl;
		for(int i=vec.size()-1; i>=0; i--){
			if(i==0)
				cout<<vec[i]<<endl;
			else
				cout<<vec[i]<<" ";
		}
		
		mp.clear();
		vec.clear();
	}

	return 0;
}

