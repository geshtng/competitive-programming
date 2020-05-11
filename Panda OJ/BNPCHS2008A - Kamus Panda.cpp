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
	while(t--){
		cin>>str;
		sort(str.begin(), str.end());
		str.erase(unique(str.begin(), str.end()), str.end());
		//cout<<str<<endl;
		cout<<str.size()<<endl;
	}

	return 0;
}

