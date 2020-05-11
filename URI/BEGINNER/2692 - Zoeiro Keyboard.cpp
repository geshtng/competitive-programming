#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n,m,len;
	char a[101], b[101], str[1000000];
	string ans;
	bool test;
	
	cin>>n>>m;
	for(int i=0; i<n; i++){
		cin>>a[i]>>b[i];
		if(isupper(a[i]))
			a[i] = tolower(a[i]);
		if(isupper(b[i]))
			b[i] = tolower(b[i]);
	}
	//cout<<a<<" "<<b<<endl;
	//getchar();
	while(m--){
		getchar();
		scanf(" %[^\n]s", str);
		//getline(cin,str);
		len = strlen(str);
		ans = "";
		for(int i=0; i<len; i++){
			test = false;
			if(isupper(str[i])){
				str[i] = tolower(str[i]);
				for(int j=0; j<n; j++){
					if(str[i]==a[j]){
						ans+=toupper(b[j]);
						test = true;
						break;
					}
					else if(str[i]==b[j]){
						ans+=toupper(a[j]);
						test = true;
						break;
					}
				}
			} else {
				for(int j=0; j<n; j++){
					if(str[i]==a[j]){
						ans+=b[j];
						test = true;
						break;
					}
					else if(str[i]==b[j]){
						ans+=a[j];
						test = true;
						break;
					}
				}
				if(!test){
					ans+=str[i];
				}
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
