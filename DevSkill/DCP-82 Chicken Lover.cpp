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

int main(){
	int t;
	int x;
	
	cin>>t;
	while(t--){
		cin>>x;
		(x>=120) ? printf("Good Boy Sifat\n") : printf("Naughty Boy Sifat\n");
	}

	return 0;
}

