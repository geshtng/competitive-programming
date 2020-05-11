#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string str;
	int ans=0;
	
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>str;
		if(str=="X++"){
			ans++;
		}
		else if(str=="--X"){
			--ans;
		}
		else if(str=="X--"){
			ans--;
		}
		else if(str=="++X"){
			++ans;
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
