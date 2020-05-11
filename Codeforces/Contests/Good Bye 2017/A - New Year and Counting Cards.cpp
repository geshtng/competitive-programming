#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int len;
	int ans=0;
	
	cin>>str;
	len = str.length();
	
	for(int i=0; i<len; i++){
		if(!isdigit(str[i])){
			if(str[i]=='a' || str[i]=='i' || str[i]=='u' || str[i]=='e' || str[i]=='o')
				ans++;
		} else {
			if(str[i]=='1' || str[i]=='3' || str[i]=='5' || str[i]=='7' || str[i]=='9')
				ans++;
		}
	}
	
	cout<<ans<<endl;
	return 0;
}

