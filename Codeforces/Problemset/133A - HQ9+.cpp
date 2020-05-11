#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	int len;
	bool test=true;
	
	cin>>str;
	len  = str.length();
	for(int i=0; i<len; i++){
		if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
			test = false;
			break;
		}	
	}
	if(test)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

	return 0;
}

