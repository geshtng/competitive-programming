#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	string str;
	
	cin>>n;
	cin>>str;
	
	str.erase(unique(str.begin(), str.end()), str.end());
	
	cout<<n-str.length()<<endl;

	return 0;
}

