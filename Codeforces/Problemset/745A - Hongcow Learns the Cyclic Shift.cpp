#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e5 + 5;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string str, temp;
	map<string,int>mp;
	int ans=0;
	
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(mp[str] == 0){
			mp[str]++;
			ans++;
		}
		
		//cout<<i<<" "<<str<<endl;
		
		temp = str.back();
		str.pop_back();
		temp.append(str);
		str = temp;
	}
	
	cout<<ans<<endl;
	

	return 0;
}

