#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main(){
	int t;
	
	cin>>t;
	while(t--){
		int a,b;
		vector<string> vec;
		string str="";
		ostringstream temp;
		
		cin>>a>>b;
		for(int i=a; i<=b; i++){
			cout<<i;
			temp<<i;
			//str += temp.str();
		}
		str = temp.str();
		//cout<<endl<<str<<endl;
		for(int i=str.length()-1; i>=0; i--){
			cout<<str[i];
		}
		
		cout<<endl;
	}
	
	return 0;
}
