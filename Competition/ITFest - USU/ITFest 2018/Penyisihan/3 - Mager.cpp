#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	string str;
	int i,j;
	
	while(getline(cin,str)){
		int len = str.length();
		int sumO=0, sumT=0;
		for(i=0; i<len; i++){
			if(str[i]=='0'){
				sumO++;
			}
			else if(str[i]=='T'){
				sumT++;
			}
		}
		vector<int>mins;
		if(sumO==len){
			cout<<"0"<<endl;
			continue;
		}
		while(sumO>0){			
			for(i=0; i<len; i++){
				if(str[i]=='0'){
					int a=0,b=0;
					
					//BACK
					if(i!=0){
						for(j=i-1; j>=0; j--){
							a++;
							if(str[j]=='T'){						
								break;
							}
						}
					} else {
						a = INT_MAX;
					}
					//cout<<"Back: "<<a<<endl;
					//FRONT
					if(i!=len-1){
						for(j=i+1; j<len; j++){
							b++;
							if(str[j]=='T'){
								break;
							}
						}
					} else {
						b = INT_MAX;
					}
					//cout<<"Front: "<<b<<endl;
					mins.push_back(min(a,b));
					sumO--;
				}
			}
		}
		
		int ans=0, sz=mins.size();
		for(i=0; i<sz; i++){
			ans+=mins[i];
		}
		cout<<ans<<endl;
		mins.clear();
	}

	return 0;
}

