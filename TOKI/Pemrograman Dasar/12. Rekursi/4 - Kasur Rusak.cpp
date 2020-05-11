#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

string str;

bool func(int x, int y){
	if(x>y) return true;
	if(x==y && str[x]==str[y]) return true;
	if(str[x] == str[y])
		return func(x+1, y-1);
	else
		return false;
}

int main(){
	cin>>str;
	
	(func(0, str.length()-1)) ? cout<<"YA"<<endl : cout<<"BUKAN"<<endl;

	return 0;
}

