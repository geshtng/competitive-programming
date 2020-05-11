#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n;
    string a,b;
    string ans;

    cin>>n;
    getchar();
    while(n--){
        getline(cin,a);
        getline(cin,b);
       	string ans="";
		
		for(int i=0; i<a.length()+b.length(); i+=2){
			ans += a[i];
			ans += a[i+1];
			ans += b[i];
			ans += b[i+1];
		}
		
		int total = a.length() + b.length();
		string final="";
		
		for(int i=0; i<total; i++){
			final += ans[i];
		}
		
		cout<<final<<endl;
	}

    return 0;
}


