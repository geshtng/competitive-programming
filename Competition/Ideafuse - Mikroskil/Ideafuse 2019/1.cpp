#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t,i=1;
	int a,b;
	
	cin>>t;
	while(t--){
		cin>>a>>b;
		if(a+b <= 100){
			cout<<"Case #"<<i<<": "<<100-a-b<<endl;
		} else {
			cout<<"Case #"<<i<<": "<<0<<endl;
		}
		
		i++;
	}

	return 0;
}

