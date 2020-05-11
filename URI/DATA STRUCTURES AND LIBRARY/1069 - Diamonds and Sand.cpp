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

	int t, ans, temp;
	string str;
	
	cin>>t;
	while(t--){
		cin>>str;
		ans = 0;
		temp = 0;
		for(int i=0; i<str.length(); i++){
			if(str[i]=='<'){
				temp++;
			}
			if(str[i]=='>' && temp>0){
				ans++;
				temp--;
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}

