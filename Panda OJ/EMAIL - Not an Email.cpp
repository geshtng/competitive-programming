#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	int t, x;
	
	cin>>t;
	for(int tc=0; tc<t; tc++){
		cin>>x;
		string str, strs, ans;
		vector<string>vec;
		
		while(x--){
			cin>>str;
			
			int pos;			
			for(int i=0; i<str.size(); i++){
				if(str[i]=='@'){
					pos = i;
					break;	
				}
			}
			for(int i=pos+1; i<str.size(); i++){
				strs += str[i];
			}
			
			vec.pb(strs);
			strs.clear();
		}
		
		sort(vec.begin(), vec.end());
		
		int count=0, max=0;
		string first = vec[0];
		for(int i=0; i<vec.size(); i++){
			if(vec[i] == first){
				count++;
			} else {
				if(count > max){
					max = count;
					ans = vec[i-1];
				}
				count = 0;
			}
		}
		
		printf("Kasus #%d: ", tc+1);
		if(vec.size() == 1)
			cout<<vec[0]<<endl;
		else
			cout<<ans<<endl;
		vec.clear();
	}

	return 0;
}

