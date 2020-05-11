#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int t, b;
string a, str;

vector<pair<string,int> > v;

int main(){
	int ans = 1;
	
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	
	cin>>str;
	bool bb;
	for(int i=0; i<v.size(); i++){
		for(int q=0; q<str.size(); q++){
			bb = false;
			for(int j=q,k=0; j<i.first.size()-1,k<i.first.size(); j++,k++){
				string w = i.first;
				if(str[j] != w[k]){
					bb = true;
					break;
				}
			}
			if(!bb){
				ans *= i.second;
				break;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}
