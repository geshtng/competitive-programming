#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str;
	string a="", b="", c="", d="";
	
	getline(cin,str);
	for(int i=0; i<3; i++)
		a+=str[i];
	for(int i=4; i<7; i++)
		b+=str[i];
	for(int i=8; i<11; i++)
		c+=str[i];
	for(int i=12; i<14; i++)
		d+=str[i];
		
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;	
	
	return 0;
}
