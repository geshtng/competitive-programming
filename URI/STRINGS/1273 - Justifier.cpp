#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t,len,mc=0;
	string str;
	vector<string>vec;
	
	while(scanf("%d", &t) != EOF){
		if(t==0) break;
		
		int max = 0;
		getline(cin,str);
		for(int i=0; i<t; i++){
			getline(cin,str);
			len = str.length();
			
			if(len>max)
				max = len;
			
			vec.push_back(str);
		}
		
		if(mc!=0)
			cout<<endl;
		else
			mc=1;
		
		for(int i=0; i<t; i++){
			cout<<right<<setw(max)<<vec.at(i)<<endl;
		}
		
		vec.clear();
	}
	
	return 0;
}
