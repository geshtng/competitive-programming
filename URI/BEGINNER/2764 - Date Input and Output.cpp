#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str;
	string a="", b="", c="";
	
	getline(cin,str);
	for(int i=0; i<2; i++){
		a+=str[i];
	}
	for(int i=3; i<5; i++){
		b+=str[i];
	}
	for(int i=6; i<8; i++){
		c+=str[i];
	}
	
	cout<<b<<"/"<<a<<"/"<<c<<endl;
	cout<<c<<"/"<<b<<"/"<<a<<endl;
	cout<<a<<"-"<<b<<"-"<<c<<endl;
	
	return 0;
}
