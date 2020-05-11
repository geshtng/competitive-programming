#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t,n,i=1;
	string str;
	
	cin>>t;
	while(t--){
		cin>>n;
		cin>>str;
		
		int ans=0;
		
		for(int i=0; i<str.size(); i++){
			if(str[i]=='0'){
				if(str[i+1]=='0'){
					i++;
					ans++;
				}
			}
		}
		
		cout<<"Case #"<<i<<": "<<ans<<endl;
		i++;
	}

	return 0;
}

