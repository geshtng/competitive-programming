#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	ll n, min, x, c;
	ll sum;
	
	cin>>t;
	while(t--){
		cin>>n;
		
		sum = 0;
		min = INT_MAX;
		for(int i=0; i<n; i++){
			cin>>x;
			sum+=x;
			if(x<min)
				min = x;
		}
		c = min*n;
		cout<<sum-c<<endl;
	}

	return 0;
}

