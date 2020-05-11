#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t,x;
	
	cin>>t;
	while(t--){
		cin>>x;
		int ct=1, cn=1;
		for(int i=1; i<=x; i++){
			for(int j=1; j<=x; j++){
				if(i==1 || i==x || j==1 || j==x){
					cout<<"1";
				}
				else if(j==ct || i==ct){
					cout<<cn;
				}
			}
			ct++;
			cout<<endl;
		}
	}

	return 0;
}

