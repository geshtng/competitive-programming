#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t, n, p;
	
	cin>>t;
	while(t--){
		cin>>n;
		int max = 0, pos;
		for(int i=0; i<pow(2,n); i++){
			cin>>p;
			if(p>max){
				max = p;
				pos = i;
			}
		}
		cout<<pos+1<<endl;
	}

	return 0;
}

