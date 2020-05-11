#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str;
	string a1="", a2="";
	int i;
	
	getline(cin,str);
	for(i=0; i<str.length(); i++){
		if(str[i]!=',')
			a1+=str[i];
		else 
			break;
	}
	
	for(int j=i+1; j<str.length(); j++){
		a2+=str[j];
	}
	
	cout<<a1<<endl;
	cout<<a2<<endl;
	
	return 0;
}
