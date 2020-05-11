#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	string str;
	vector<string>vec;
	
	cin>>t;
	getline(cin,str);
	while(t--){
		getline(cin,str);
		vec.push_back(str);
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());
	
	cout<<"Falta(m) "<<151-vec.size()<<" pomekon(s)."<<endl;
	
	return 0;
}
