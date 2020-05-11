#include<bits/stdc++.h>
using namespace std;

typedef long long int LL;

const int N = 1e5;
const int MOD = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	
	string str;
	cin>>str;
	
	string ans="";
	if(str.length()%2==0){
		for(int i=0, j=str.length()/2-1, k=str.length()/2; i<str.length(); i++){
			if(i%2==0){
				ans += str[j];
				j--;
			} else {
				ans += str[k];
				k++;
			}
		}
	} else {
		for(int i=0, j=str.length()/2, k=str.length()/2+1; i<str.length(); i++){
			if(i%2==0){
				ans += str[j];
				j--;
			} else {
				ans += str[k];
				k++;
			}
		}
	}
	
	cout<<ans<<endl;
	
	return 0;
}

