#include<bits/stdc++.h>
using namespace std;
int main(){
	int len;
	string str;
	int sum=1;
	
	cin>>str;
	len = str.length();
	for(int i=1; i<len; ++i){
		if(str[i]==str[i-1]){
			sum++;
			if(sum==7){
				cout<<"YES"<<endl;
				return 0;
			}
		} else {
			sum=1;
		}
	}
	
	cout<<"NO"<<endl;
	return 0;
}
