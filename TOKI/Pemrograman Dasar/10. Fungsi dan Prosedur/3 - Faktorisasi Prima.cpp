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

vi vec, hue;

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

void sieve(int n){
	bool elim[n+1];
	
	memset(elim,true,sizeof(elim));
	int j;
	for(int i=2; i*i<=n; i++){
		if(elim[i]){
			for(int j=i*2; j<=n; j+=i){
				elim[j] = false;
			}
		}
	}
	
	for(int i=2; i<=n; i++){
		if(elim[i])
			vec.pb(i);
	}
}

void primeFact(int n){
	for(int i=0; i<vec.size(); i++){
		if(n % vec[i]==0){
			hue.pb(vec[i]);
		}
	}
}

void pangkat(int y, int n){
	int bas, pkt;
	bas = y;
	pkt = 0;
	while(y<=n && (n%y==0)){
		y *= bas;
		pkt++;
	}
	
	if(pkt!=1)
		cout<<"^"<<pkt;
}

int main(){
	int n;
	cin>>n;
	
	if(n==1)
		cout<<n<<endl;
	else if(isPrime(n))
		cout<<n<<endl;
	else{
		sieve(n);
		primeFact(n);
		for(int i=0; i<hue.size(); i++){
			if(i==hue.size()-1){
				cout<<hue[i];
				pangkat(hue[i], n);
				cout<<endl;			
			} else {
				cout<<hue[i];
				pangkat(hue[i], n);
				cout<<" x ";
			}
		}
	}

	return 0;
}

