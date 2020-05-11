#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t;
	string str;
	
	cin>>t;
	for(int tc=0; tc<t; tc++){
		cin>>str;
		sort(str.begin(), str.end());
		int count=1;
		map<char,int>mp;
		for(int i=0; i<str.size(); i++){
			if(str[i] == str[i+1]){
				count++;
			} else {
				mp.make_pair(str[i], count);
				count=1;
			}
		}
		
		for(map<string,int>mp::iterator i=mp.begin(); i!=mp.end(); i++){
			cout<<mp->first<<" "<<mp->second<<endl;
		}
	}

	return 0;
}

