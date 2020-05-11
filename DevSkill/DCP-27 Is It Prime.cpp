#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

bool isPrime(int n){
	if(n<=1)
		return false;
	int i=2;
	while(i*i <= n){
		if(n%i==0)
			return false;
		i++;
	}
	return true;
}

int main(){
	int t;
	int x;
	
	cin>>t;
	while(t--){
		cin>>x;
		if(isPrime(x))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}

	return 0;
}

