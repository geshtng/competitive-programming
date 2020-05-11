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
	int n;
	int a=0,b=0,x;
	
	cin>>n;
	while(n--){
		cin>>x;
		(x==0) ? a++ : b++;
	}
	
	(b>=a) ? cout<<"N"<<endl : cout<<"Y"<<endl;
	
	return 0;
}

