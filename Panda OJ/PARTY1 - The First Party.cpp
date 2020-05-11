#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

bool isPrime(int n){
	if(n<=1)
		return false;
	int i = 2;
	while(i*i <= n){
		if(n%i==0)
			return false;
		i++;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t,x;
	vector<int>vec;
	
	cin>>t;
	while(t--){
		cin>>x;
		for(int i=2; i<=x; i++){
			if(isPrime(i)){
				vec.push_back(i);
			}
		}
		for(int i=0; i<vec.size(); i++){
			cout<<vec[i]<<" ";
		}
		cout<<endl;
		vec.clear();
	}

	return 0;
}

