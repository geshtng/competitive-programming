#include<bits/stdc++.h>
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;
typedef long long int ll;
typedef vector<int>  vi;
typedef pair<int,int> pii;
typedef map<int,int> mii;
typedef set<int> si;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t, x;
	
	cin>>t;
	while(t--){
		cin>>x;
		if(x>8000)
			cout<<"Mais de 8000!"<<endl;
		else
			cout<<"Inseto!"<<endl;
	}

	return 0;
}

