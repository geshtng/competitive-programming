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

	string str;
	while(cin>>str){
		stack<char> stc;
		for(int i=0; i<str.length(); i++){
			if(str[i] == '('){
				stc.push(i);
			}
			if(str[i] == ')'){
				if(!stc.empty()){
					stc.pop();
				} else {
					stc.push(i);
				}
			}
		}
		
		if(stc.empty())
			cout<<"correct"<<endl;
		else
			cout<<"incorrect"<<endl;
	}
	
	return 0;
}

