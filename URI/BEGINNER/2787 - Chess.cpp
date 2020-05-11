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
	int x,y;
	
	cin>>x>>y;
	if(x%2==1 && y%2==1)
		cout<<"1"<<endl;
	else if(x%2==1 && y%2==0)
		cout<<"0"<<endl;
	else if(x%2==0 && y%2==1)
		cout<<"0"<<endl;
	else if(x%2==0 && y%2==0)
		cout<<"1"<<endl;

	return 0;
}

