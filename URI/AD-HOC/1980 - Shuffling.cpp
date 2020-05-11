#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){	
	int length;
	string ch;
	unsigned long long int ans;
	
	while(cin>>ch && ch!="0"){
		length = ch.length();
		if(length==1 && ch[0]=='0')
			break;
			
		ans=1;
		for(int i=2; i<=length; i++){
			ans*=i;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
