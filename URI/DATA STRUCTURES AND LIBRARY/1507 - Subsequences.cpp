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

bool isSub(string a, string b){
	int j=0;
	
	for(int i=0; i<a.size() && j<b.size(); i++){
		if(b[j] == a[i]){
			j++;
		}
	}
	
	return (j==b.size());
}

int main(){
	int t,n;
	string a,b;
	
	cin>>t;
	while(t--){
		cin>>a;
		getchar();
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>b;
			(isSub(a,b)) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
		}
	}

	return 0;
}

