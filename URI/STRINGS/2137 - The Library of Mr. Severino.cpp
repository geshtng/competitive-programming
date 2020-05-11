#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int n;
	string str;
	vector<string>vec;
	
	while(scanf("%d", &n) != EOF){
		getline(cin,str);
		for(int i=0; i<n; i++){
			getline(cin,str);
			vec.push_back(str);
		}
		sort(vec.begin(), vec.end());
		
		for(int i=0; i<vec.size(); i++){
			cout<<vec[i]<<endl;
		}
		vec.clear();
	}
	
	
	return 0;
}
