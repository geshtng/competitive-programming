#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	string str;
	
	cin>>t;
	getline(cin,str);
	while(t--){
		getline(cin,str);
		
		set<string>st;
		set<string>::iterator it;
		
		stringstream ss(str);
		string buff;
		while(ss>>buff){
			st.insert(buff);
		}
		
		vector<string>vec;
		
		for(auto it=st.begin(); it!=st.end(); ++it){
			vec.push_back(*it);
		}
		for(int i=0; i<vec.size()-1; i++){
			cout<<vec[i]<<" ";
		}
		cout<<vec[vec.size()-1]<<endl;
	}

	return 0;
}

