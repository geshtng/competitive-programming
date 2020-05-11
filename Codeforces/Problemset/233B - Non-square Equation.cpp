#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

ll digit(ll n){
	ll sum=0;
	while(n){
		sum += n%10;
		n/=10;
	}
	
	return sum;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n, sx;

	while(cin>>n){
		ll x=1, e=1e8, ans=-1;
		
		for(ll i=1; i<=100; i++){
			ll temp = i*i/4+n;
			
			x = sqrt(temp)-i/2;
			sx = digit(x);
			if(x*x+sx*x-n==0){
				ans = x;
				break;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

