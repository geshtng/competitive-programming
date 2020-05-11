#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const int N = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	int wj,wp,mj,mp,jj,jp;
	
	cin>>t;
	for(int tc=1; tc<=t; tc++){
		cin>>wj>>wp>>mj>>mp>>jj>>jp;
		if(wp>wj){
			cout<<"Kasus #"<<tc<<": "<<"TIME LIMIT EXCEEDED / TIMELIMIT"<<endl;
			continue;
		}
		else if(mp>mj){
			cout<<"Kasus #"<<tc<<": "<<"MEMORY LIMIT EXCEEDED"<<endl;
			continue;
		}
		else if(jj!=jp){
			cout<<"Kasus #"<<tc<<": "<<"WRONG-ANSWER"<<endl;
			continue;
		}
		else {
			cout<<"Kasus #"<<tc<<": "<<"ACCEPTED / CORRECT"<<endl;
			continue;
		}
	}
	
	return 0;
}

