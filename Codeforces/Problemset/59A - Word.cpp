#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	string str;
	int up=0, down=0;
	cin>>str;
	for(int i=0; i<str.length(); i++){
		if(isupper(str[i]))
			up++;
		else
			down++;
	}
	
	string ans="";
	
	if(up>down){
		for(int i=0; i<str.length(); i++){
			ans+=toupper(str[i]);
		}
	} else {
		for(int i=0; i<str.length(); i++){
			ans+=tolower(str[i]);
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

