#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define in insert

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

const int N = 1e5;
const int MOD = 1e9 + 7;

int fib(int n){
	int f[n+1];
	int i;
	
	f[0] = 0;
	f[1] = 1;
	for(i=2; i<=n; i++){
		f[i] = f[i-1] + f[i-2];
	}
	
	return f[n];
}

int main(){
	int n;
	cin>>n;
	for(int i=n; i>=1; i--){
		if(i==1)
			cout<<fib(i)<<endl;
		else
			cout<<fib(i)<<" ";
	}

	return 0;
}

