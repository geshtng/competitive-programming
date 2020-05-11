#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int a,b,c,x;
	
	cin>>t;
	while(t--){
		cin>>a>>b>>c;
		c = c-2000;
		if(c<0){
			cout<<a<<endl;
		} else {
			x = (b*c)/100;
			cout<<a+x<<endl;
		}
	}
	
	return 0;
}
